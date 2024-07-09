from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(num, prev) if not isinstance(prev, int) else num for prev, num in zip([0] + numbers, numbers)]
    return result