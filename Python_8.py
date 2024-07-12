from typing import List, Tuple

def sum_product():
    numbers = list(map(int, input("Enter space-separated integers: ").split()))
    total = 1
    product = 1
    if not numbers:
        return 0, 1
    for num in numbers:
        total += num
        product *= num
    return total, product

print(sum_product())