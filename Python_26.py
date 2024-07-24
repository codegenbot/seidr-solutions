from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = []
    result = []
    for num in numbers:
        if num not in seen:
            seen.append(num)
            result.append(num)
    return result