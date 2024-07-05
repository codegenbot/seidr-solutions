from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for number in numbers:
        total_product *= number
    return total_sum, total_product

if __name__ == "__main__":
    import sys
    input_numbers = list(map(int, sys.stdin.read().strip().split()))
    result = sum_product(input_numbers)
    print(result)