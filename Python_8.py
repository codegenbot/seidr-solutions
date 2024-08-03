```
from typing import List, Tuple


def sum_product():
    numbers = input("Enter space-separated integers: ").split()
    if not numbers:
        return 0, 1
    numbers = [int(num) for num in numbers]
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product


result = sum_product()
print(f"Sum: {result[0]}, Product: {result[1]}")