from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    numbers = list(set(numbers))
    numbers.sort()
    return numbers

numbers = [1, 2, 3, 4, 5, 5]
print(remove_duplicates(numbers))