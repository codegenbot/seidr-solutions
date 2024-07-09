from typing import List

def rolling_max(numbers: List[int]) -> list:
    result = [max(numbers[:i+1]) for i in range(len(numbers))]
    return result