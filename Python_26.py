```Python
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    return [seen.add(x) or x for x in numbers]