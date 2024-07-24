from typing import List, Tuple

def sum_product(numbers: list[str]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        try:
            num_int = int(num)
            total_sum += num_int
            product *= num_int
        except ValueError:
            return "Invalid input. Please enter a valid integer."
    return total_sum, product