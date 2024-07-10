from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    
    for num in sorted({n for n in numbers if not n in seen}.union(seen)):
        result.append(num)
        
    return result