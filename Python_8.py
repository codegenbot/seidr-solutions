```Python
from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not isinstance(numbers, list):
        raise ValueError("Input must be a list")
    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("List elements must be integers")
    total_sum = 0
    product = 1
    if len(numbers) > 0:
        for num in numbers:
            total_sum += num
            product *= num
    else:
        total_sum = 0
        product = 1
    return total_sum, product

def main():
    user_input = input("Enter a list of space-separated integers: ")
    numbers = [int(num) for num in user_input.split()]
    try:
        result = sum_product(numbers)
        print(f"Sum is {result[0]} and product is {result[1]}")
    except ValueError as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    main()