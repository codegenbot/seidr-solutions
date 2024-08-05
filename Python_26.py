from typing import List
def remove_duplicates(numbers: set[int]) -> List[int]:
    return [num for num in numbers if sum(1 for n in numbers if n == num) == 1]