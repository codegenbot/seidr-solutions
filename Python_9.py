```Python
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [0]
    max_so_far = 0
    for num in numbers:
        if num > 0:
            max_so_far = max(num, max_so_far + num)
        else:
            max_so_far = max(0, num)
        result.append(max_so_far)
    return result