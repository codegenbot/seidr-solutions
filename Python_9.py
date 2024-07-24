from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_seen_so_far = local_max = numbers[0]
    result = [max_seen_so_far]

    for num in numbers[1:]:
        local_max = max(num, local_max)
        max_seen_so_far = max(local_max, max_seen_so_far)
        result.append(max_seen_so_far)

    return result