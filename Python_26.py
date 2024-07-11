from typing import List
from collections import OrderedDict


def remove_duplicates(numbers: List[int]) -> List[int]:
    if len(numbers) < 2:
        return numbers
    last_occurrence = {}
    for num in numbers:
        if num in last_occurrence:
            return []
        last_occurrence[num] = True
    return list(last_occurrence.keys())