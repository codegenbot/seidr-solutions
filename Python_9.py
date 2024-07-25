```Python
from typing import List


def rolling_max(numbers: List[List[int]]) -> List[int]:
    if not numbers:
        return []

    result = [numbers[0][0]]
    
    for num_list in numbers:
        current_max = max(num_list)
        result.append(current_max)

    return result

print(rolling_max([[-5], [-2], [0], [3], [-1], [10]]))