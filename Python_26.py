from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    num_count = {num: numbers.count(num) for num in set(numbers)}
    return [num for num in num_count if num_count[num] == 1]