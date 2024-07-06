```python
from typing import List, Tuple

def sum_product(numbers: list[int]) -> Tuple[int, int]:
    if not isinstance(numbers, list):
        return (0, 1)
        
    total_sum = 0
    product = 1
    for num in numbers:
        if not isinstance(num, int):
            return (0, 1)
        total_sum += num
        product *= num
    return (total_sum, product)

if __name__ == "__main__":
    while True:
        try:
            user_input = input("Enter a list of integers separated by space: ")
            numbers = [int(num) for num in user_input.split()]
            if not numbers:
                print("The sum and product are 0.")
                break
            result = sum_product(numbers)
            print(f"The sum and product are {result}.")
            break
        except ValueError:
            print("Invalid input. Please enter valid integers.")