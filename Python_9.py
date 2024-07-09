from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []
    result = [max(x for x in numbers[:i+1]) for i in range(len(numbers))]
    return result