from typing import List, Tuple
import functools


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    try:
        if len(numbers) == 0:
            return (0, 1)
        elif len(numbers) == 1:
            return (numbers[0], numbers[0])
        else:
            return (
                sum(numbers),
                functools.reduce(lambda x, y: x * y, numbers),
            )
    except TypeError as e:
        print(f"Invalid input. Error: {e}")