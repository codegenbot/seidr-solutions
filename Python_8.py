```
from typing import List, Tuple


def sum_product():
    numbers = input("Enter space-separated integers: ").split()
    try:
        numbers = [int(num) for num in numbers]
    except ValueError:
        return (0, 1)

    if not numbers:
        return (0, 1)
    total_sum = 0
    total_product = 1
    for num in numbers:
        total_sum += num
        total_product *= num
    return (total_sum, total_product)


print(sum_product())