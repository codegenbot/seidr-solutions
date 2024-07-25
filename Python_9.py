from typing import list

def rolling_max(numbers: list[list[int]]) -> list[int]:
    result = [max(row) for row in zip(*numbers)]
    return result