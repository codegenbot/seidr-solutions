from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    lines = input().strip().split('\n')
    for line in lines:
        if line.strip():
            numbers = list(map(int, line.split()))
            result = sum_product(numbers)
            print(result)