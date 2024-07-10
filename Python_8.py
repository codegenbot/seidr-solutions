from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    try:
        total_sum = 0
        product = 1

        for number in numbers:
            if not isinstance(number, int):
                raise TypeError
            total_sum += number
            product *= number

        return total_sum, product
    except TypeError:
        return "Invalid input. Please enter a list of integers."