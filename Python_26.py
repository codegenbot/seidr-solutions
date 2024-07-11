```Python
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    if len(set(numbers)) != len(numbers):
        for i in set(numbers):
            while i in numbers and list(set(numbers)).count(i) > 1:
                numbers.remove(i)
    return numbers