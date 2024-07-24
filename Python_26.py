from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = [x for x in set(numbers)]
    return unique_numbers