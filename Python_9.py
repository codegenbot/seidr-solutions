from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []

    result = [max(numbers)] + [max(numbers[: i + 1]) for i in range(len(numbers) - 1)]

    return result


print(rolling_max([-5, -2, 0, 3, -1, 10]))