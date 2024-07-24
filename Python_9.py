from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_seen_so_far = float("-inf")
    result = []
    for num in numbers:
        max_seen_so_far = max(num, max_seen_so_far)
        result.append(max_seen_so_far)
    return result


print(rolling_max([1, 3, -1, 5, -2]))