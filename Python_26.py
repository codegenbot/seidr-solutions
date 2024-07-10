from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    if not numbers:
        return []
    result = []
    for num in set(numbers):
        count = 0
        for n in numbers:
            if n == num:
                count += 1
        if count > 0:
            result.append((num, count))
    return [item[0] for item in result]