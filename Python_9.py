from typing import list


def rolling_max(numbers: list[int]) -> list[int]:
    result = []
    max_so_far = max_current = numbers[0]
    for num in numbers[1:]:
        max_current = max(num, max_current)
        result.append(max_current)
    return result