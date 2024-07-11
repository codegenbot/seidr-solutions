from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = current_max = sum(numbers[:1])
    result = [current_max]

    for num in numbers[1:]:
        current_max = max(num, current_max + num)
        result.append(current_max)

    return result