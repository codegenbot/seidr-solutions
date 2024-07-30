from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    duplicates = set()
    for num in numbers:
        if num in seen:
            duplicates.add(num)
        seen.add(num)
    return [num for num in numbers if num not in duplicates]