from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max([numbers[i], numbers[0]] if i == 0 else numbers[i]) for i in range(len(numbers))]
    return result