from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = 0
    product_result = 1
    for number in numbers:
        sum_result += number
        product_result *= number
    return sum_result, product_result


if __name__ == "__main__":
    input_numbers = input("Enter numbers (separated by space): ").split()
    numbers = [int(number) for number in input_numbers]
    result = sum_product(numbers)
    print(f"Sum: {result[0]}, Product: {result[1]}")