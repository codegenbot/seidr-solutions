from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    num_count = {}
    for num in numbers:
        num_count[num] = num_count.get(num, 0) + 1
    return [num for num in numbers if num_count[num] == 1]