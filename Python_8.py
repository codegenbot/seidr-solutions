from typing import List, Tuple

def sum_product() -> Tuple[int, int]:
    try:
        numbers = input("Enter a list of numbers (space-separated): ").split()
        numbers = [int(num) for num in numbers]
        total_sum = 0
        product = 1
        for num in numbers:
            total_sum += num
            product *= num
        return total_sum, product
    except ValueError:
        return "Invalid input. Please enter valid integers."