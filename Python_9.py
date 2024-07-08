from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [numbers[0]]
    max_so_far = numbers[0]
    for num in numbers[1:]:
        max_so_far = max(num, max_so_far + num)
        result.append(max_so_far)
    return result