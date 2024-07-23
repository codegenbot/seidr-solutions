```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = sorted(set(map(str, numbers)))
    print("Unique numbers:", unique_numbers)
    return list(map(int, unique_numbers))