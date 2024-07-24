from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max([numbers[0]])]
    max_rolled = max([numbers[0]])
    for i in range(1, len(numbers)):
        max_rolled = max(numbers[i], max_rolled)
        result.append(max_rolled)
    return result