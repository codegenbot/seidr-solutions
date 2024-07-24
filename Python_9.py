from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(sum(filter(lambda x: x <= n, numbers[: i + 1])) for n in numbers)]
    return result