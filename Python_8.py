from typing import List, Tuple

def sum_product() -> Tuple[int, int]:
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product

result = sum_product()
print(result)