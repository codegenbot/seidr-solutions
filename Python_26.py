from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = [i for i in set(numbers)]
    return sorted([i for i in unique_numbers if numbers.count(i) > 0])