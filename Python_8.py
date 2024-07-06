```
from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return (total_sum, product)

if __name__ == "__main__":
    try:
        numbers = [int(x) for x in input("Enter the list of numbers separated by space: ").split()]
        result = sum_product(numbers)
        print(f"Sum: {result[0]}, Product: {result[1]}")
    except ValueError:
        print("Invalid input. Please enter a list of integers.")