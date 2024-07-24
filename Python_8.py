from typing import List, Tuple

def sum_product():
    numbers = list(map(int, input("Enter space-separated numbers: ").split()))
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product

print(sum_product())