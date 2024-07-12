from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = set(num for num in numbers if numbers.count(num) == 1)
    return [num for num in numbers if num in unique_numbers]