from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for number in numbers:
        total_product *= number
    return total_sum, total_product

if __name__ == "__main__":
    user_input = input()
    numbers = list(map(int, user_input.split()))
    result = sum_product(numbers)
    print(result)