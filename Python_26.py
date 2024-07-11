from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    result = []
    for num in set(numbers):
        if num not in result:
            result.append(num)
    return result