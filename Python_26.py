from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    if not isinstance(numbers, list):
        return []
    seen = set()
    result = [
        num
        for num in numbers
        if type(num) == int and not (isinstance(seen, set) and num in seen)
    ]
    return result