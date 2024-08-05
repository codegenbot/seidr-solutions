from typing import List

def remove_duplicates(numbers: set[int]) -> List[int]:
    return [num for num in numbers if list(numbers).count(num) == 1]