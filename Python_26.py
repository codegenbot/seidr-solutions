from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set([num for num in numbers if numbers.count(num) == 1]))