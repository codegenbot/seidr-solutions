from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    return [seen.add(num) or num for num in numbers if num not in seen]