from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_so_far = numbers[0]
    result = [max_so_far]

    for i in range(1, len(numbers)):
        if numbers[i] > max_so_far:
            max_so_far = numbers[i]
        result.append(max_so_far)

    return result