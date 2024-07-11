from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    if not isinstance(numbers, list):
        raise ValueError("Input must be a list of integers")
    return list(set(map(int, numbers)))