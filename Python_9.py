from typing import List, int

def rolling_max(numbers: List[int]) -> list[int]:
    result = [max(numbers[:i+1]) for i in range(len(numbers))]
    return result