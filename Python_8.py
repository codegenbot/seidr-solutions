from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result


if __name__ == "__main__":
    try:
        numbers = list(map(int, input().split()))
        result_sum, result_product = sum_product(numbers)
        print(result_sum, result_product)
    except ValueError:
        print("Invalid input. Please enter integers separated by spaces.")