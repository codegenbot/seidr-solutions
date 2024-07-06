from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return [x for i, x in enumerate(sorted(set(numbers))) if numbers.index(x) == i]