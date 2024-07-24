```
from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_seen_so_far = current_max = numbers[0]
    result = [current_max]

    for number in numbers[1:]:
        if number > current_max:
            current_max = number
        result.append(current_max)

    return result