```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    num_count = {}
    for num in numbers:
        if num not in num_count:
            num_count[num] = 0
        num_count[num] += 1
    
    unique_numbers = []
    for num, count in num_count.items():
        if count > 0:
            unique_numbers.append(num)
    
    return [num for _, num in sorted((num_count[num], num) for num in numbers)]