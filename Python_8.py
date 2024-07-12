```
from typing import List, Tuple


def sum_product():
    try:
        input_str = input("Enter space-separated integers: ")
        numbers = [int(num) for num in input_str.split()]
    except ValueError:
        print("Invalid input. Please enter valid integers.")
        return
    if not numbers:
        return (0, 1)
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return (total_sum, product)

print(sum_product())