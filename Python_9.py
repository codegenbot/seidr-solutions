from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if len(numbers) < 2:
        return []
    max_so_far = max(0)
    result = [0]
    for num in numbers[1:]:
        max_ending_here = max(num, max_so_far + num)
        result.append(max_ending_here)
        if max_ending_here > max_so_far:
            max_so_far = max_ending_here
    return result