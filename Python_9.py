from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_val = numbers[0]
    result = [max_val]

    for num in numbers[1:]:
        max_val = max(num, max_val)
        result.append(max_val)

    return result