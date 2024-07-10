```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    try:
        if len(numbers) == 0:
            raise ValueError
        total_sum = 0
        product = 1

        for number in numbers:
            total_sum += number
            product *= number

        return total_sum, product
    except TypeError:
        return "Invalid input. Please enter a list of integers."
    except ValueError:
        return "The input list is empty."