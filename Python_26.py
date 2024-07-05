from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in set(numbers)]