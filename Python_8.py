```
from typing import Tuple

def calculate_average_and_median(numbers: list[int]) -> Tuple[float, float]:
    if not isinstance(numbers, list):
        return "Expected input: list of integers"
    if not numbers:
        return "Expected input: list of integers"

    for num in numbers:
        if not isinstance(num, int):
            return "Expected input: list of integers"

    average = sum(numbers) / len(numbers)
    sorted_numbers = sorted(numbers)
    median = (
        sorted_numbers[len(sorted_numbers) // 2]
        if len(sorted_numbers) % 2 != 0
        else (
            sorted_numbers[len(sorted_numbers) // 2 - 1]
            + sorted_numbers[len(sorted_numbers) // 2]
        )
        / 2
    )

    return average, median