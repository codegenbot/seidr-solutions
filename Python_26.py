```
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    if not isinstance(numbers, list):
        return "Invalid input. Please provide a list of integers."
    
    seen = set()
    result = [num for num in numbers if not (num in seen or seen.add(num))]

    return result