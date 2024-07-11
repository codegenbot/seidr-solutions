from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    if len(set(numbers)) != len(numbers):
        numbers = [x for x in set(numbers)]
    return list(map(int, str(numbers).split(",")))