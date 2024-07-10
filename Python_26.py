from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    if len(set(numbers)) != len(numbers):
        numbers = list(dict.fromkeys(numbers))
    return numbers