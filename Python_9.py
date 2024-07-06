from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_seen = numbers[0]
    result = [max_seen]

    for num in numbers[1:]:
        if num > max_seen:
            max_seen = num
        result.append(max_seen)

    return result