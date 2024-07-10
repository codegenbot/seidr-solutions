```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return total_sum, product if len(numbers) > 0 else (total_sum, 1)


def main():
    user_input = input("Please enter a list of space-separated integers: ")
    numbers = [int(num) for num in user_input.split()]
    result = sum_product(numbers)
    print(f"The sum is {result[0]} and the product is {result[1]}. ")


if __name__ == "__main__":
    main()