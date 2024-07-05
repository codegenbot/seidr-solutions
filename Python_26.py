from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    count_map = {}
    for num in numbers:
        count_map[num] = count_map.get(num, 0) + 1
    return [num for num in numbers if count_map[num] == 1]