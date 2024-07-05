from typing import List, Tuple
import sys


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product


if __name__ == "__main__":
    numbers = list(map(int, sys.stdin.read().strip().split()))
    result = sum_product(numbers)
    print("Sum:", result[0], "Product:", result[1])