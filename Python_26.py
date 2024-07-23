from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    return [n for n in numbers if not (n in seen or seen.add(n))]