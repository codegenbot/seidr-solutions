from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(map(int, str(numbers[:i+1]))[1:]) for i in range(len(numbers))]
    return result