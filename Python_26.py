from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    for num in sorted(numbers):
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result