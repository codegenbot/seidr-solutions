from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = [num for num in numbers if not (num in seen) and seen.add(num)]
        
    return result