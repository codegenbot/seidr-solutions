from typing import List


def rolling_max(numbers: List[List[int]]) -> List[int]:
    if not numbers:
        return []

    result = []
    max_val = float('-inf')
    for num_list in numbers:
        new_max = max(num_list)
        if new_max > max_val:
            max_val = new_max
        result.append(max_val)

    return result


print(rolling_max([[-5], [-2], [0], [3], [-1], [10]]))