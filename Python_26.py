from typing import Set

def remove_duplicates(numbers: Set[int]) -> Set[int]:
    return {num for num in numbers if numbers.count(num) == 1}