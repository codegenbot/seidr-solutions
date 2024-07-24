from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    counts = {}
    for num in set(numbers):
        counts[num] = 1 if numbers.count(num) > 0 else 0

    return [num for num, count in counts.items() if count > 0]