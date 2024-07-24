```Python
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = list(set(numbers))
    return [num for num in sorted(unique_numbers)]