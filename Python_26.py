from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set([n for n in numbers if n is not None]))