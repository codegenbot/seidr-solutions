```
from typing import List


def max_subarray_sum(numbers: List[int]) -> List[int]:
    if not numbers:
        return []

    max_current = max_global = numbers[0]
    max_subarray_sums = [max_global]

    for num in numbers[1:]:
        max_current = max(num, max_current + num)
        max_global = max(max_global, max_current)
        max_subarray_sums.append(max_global)

    return max_subarray_sums