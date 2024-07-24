from typing import list

def rolling_max(numbers: list) -> list:
    result = [max(numbers[: i + 1]) for i in range(len(numbers))]
    return result