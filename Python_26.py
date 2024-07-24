```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    if not isinstance(numbers, list):
        raise TypeError("Input should be a list")
    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("The input list must only contain integers")
    
    unique_numbers = [x for x in set(numbers)]
    return unique_numbers