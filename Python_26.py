from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in sorted(numbers):
        if str(num) not in seen:
            seen.add(str(num))
            result.append(int(str(num)))
    return result