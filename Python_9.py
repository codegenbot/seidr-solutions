from typing import list

def rolling_max(numbers: list) -> list:
    result = [max(range(1, i + 1)) for i in range(len(numbers))]
    return result