from typing import List
import sorted

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(sorted(set(numbers)))