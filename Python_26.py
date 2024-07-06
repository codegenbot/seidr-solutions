from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    result = []
    for num in numbers:
        if numbers.count(num) == 1:
            result.append(num)
    return result