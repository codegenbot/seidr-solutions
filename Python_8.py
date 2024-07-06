```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return (total_sum if len(numbers) > 0 else 0, product if len(numbers) > 0 else 1)


def main():
    input_str = input("Enter a list of numbers separated by spaces: ")
    numbers = [int(num) for num in input_str.split()]
    result = sum_product(numbers)
    print(f"The sum is {result[0]} and the product is {result[1]}")


if __name__ == "__main__":
    main()