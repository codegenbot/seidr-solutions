```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return (total_sum if len(numbers) > 0 else 0, product if len(numbers) > 0 else 1)


if __name__ == "__main__":
    user_input = input("Enter some numbers separated by space: ")
    try:
        numbers = [int(num) for num in user_input.split()]
        sum_result, prod_result = sum_product(numbers)
        print(f"Sum: {sum_result}, Product: {prod_result}")
    except ValueError:
        print("Invalid input. Please enter integers separated by space.")