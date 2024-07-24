from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = []
    for num in set(numbers):
        if numbers.count(num) > 1:
            continue
        unique_numbers.append(num)
    return unique_numbers