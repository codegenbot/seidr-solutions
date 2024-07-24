from typing import List

def rolling_max(numbers: list) -> list:
    max_seen_so_far = float("-inf")
    result = []
    for num in numbers:
        if num > max_seen_so_far:
            max_seen_so_far = num
        result.append(max_seen_so_far)
    return result