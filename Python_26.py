from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = {}
    result = []
    for num in numbers:
        if num not in seen or seen[num] == 1:
            seen[num] = seen.get(num, 0) + 1
            result.append(num)
    return result