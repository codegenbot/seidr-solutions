from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = [i for i in set(numbers)]
    return [i for i in numbers if i in unique_numbers]