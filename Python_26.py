from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = list(set(numbers))
    return [i for i in numbers if i in unique_numbers]