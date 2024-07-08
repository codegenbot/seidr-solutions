from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    return [num for num in sorted(set(numbers)) if not (num in seen or seen.add(num))]