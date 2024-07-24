```
from typing import List, Tuple


def sum_product():
    while True:
        try:
            numbers = list(map(int, input("Enter space-separated integers: ").split()))
            if not numbers:
                return 0, 1
            total_sum = 0
            product = 1
            for num in numbers:
                total_sum += num
                product *= num
            return total_sum, product
        except ValueError:
            print("Invalid input. Please enter space-separated integers.")

print(sum_product())