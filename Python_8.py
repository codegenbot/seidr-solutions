from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product


if __name__ == "__main__":
    input_str = input("Enter space-separated numbers: ")
    input_numbers = list(map(int, input_str.split()))
    total_sum, product = sum_product(input_numbers)
    print(f"Sum is {total_sum}, Product is {product}")