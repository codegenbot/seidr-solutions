from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = [i for i in set(numbers)]
    return sorted([num for num in numbers if num in unique_numbers])