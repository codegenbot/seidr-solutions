Here is the corrected code:

from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    numbers_str = input("Enter numbers separated by commas: ")
    for num in map(int, numbers_str.split(',')):
        if str(num) not in seen:
            seen.add(str(num))
            result.append(num)
    return result