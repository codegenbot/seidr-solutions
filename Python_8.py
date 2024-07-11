```
from typing import Tuple

def calculate_average_and_median(numbers: list[int]) -> Tuple[float, float]:
    if not numbers:
        return 0.0, None
    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("All elements must be integers")
    average = sum(numbers) / len(numbers)
    sorted_numbers = sorted(numbers)
    median = (
        sorted_numbers[len(sorted_numbers) // 2]
        if len(sorted_numbers) % 2 != 0
        else (sorted_numbers[len(sorted_numbers) // 2 - 1] + sorted_numbers[len(sorted_numbers) // 2]) / 2
    )

    return average, median