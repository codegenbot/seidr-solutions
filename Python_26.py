from typing import List

def remove_duplicates(*numbers: int) -> List[int]:
    return [num for num in set(numbers) if numbers.count(num) == 1]