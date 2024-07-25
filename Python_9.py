```
from typing import List


def rolling_max(numbers: List[List[int]]) -> List[int]:
    if not numbers:
        return []

    result = []
    for num_list in numbers:
        max_val = max(num_list)
        result.append(max_val)

    return result


print(rolling_max([[-5], [-2], [0], [3], [-1], [10]]))