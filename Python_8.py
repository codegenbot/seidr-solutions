```
from typing import List, Tuple

def sum_product():
    try:
        numbers = [int(num) for num in input("Enter a list of integers (space-separated): ").split()]
        total_sum = 0
        product = 1
        for num in numbers:
            total_sum += num
            product *= num
        return (total_sum, product)
    except ValueError:
        return "Invalid input. Please enter a list of integers."