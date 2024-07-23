from typing import list

def rolling_max(numbers: list[int]) -> list[int]:
    result = [max(numbers[: i + 1]) for i in range(len(numbers))]
    return result