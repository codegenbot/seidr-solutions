```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product


def sum_product():
    while True:
        try:
            numbers = list(map(int, input("Enter space-separated integers: ").split()))
            return sum_product(numbers)
        except ValueError:
            print("Invalid input. Please enter only integers.")

print(sum_product())