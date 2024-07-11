from typing import List

def remove_duplicates(numbers: str) -> List[int]:
    return sorted(list(set(map(int, numbers.split()))))