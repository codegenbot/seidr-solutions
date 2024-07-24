from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = list(set([i for i in sorted(numbers)]))
    return unique_numbers