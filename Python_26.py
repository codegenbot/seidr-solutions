from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in map(int, input().split()):
        if num not in seen:
            seen.add(num)
            result.append(num)
    return list(result)