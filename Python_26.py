from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    count = {}
    for num in numbers:
        if num in count:
            count[num] += 1
        else:
            count[num] = 1
    return [num for num in numbers if count[num] == 1]