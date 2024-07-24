from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = {}
    return [seen.setdefault(x, x) for x in numbers if x not in seen]