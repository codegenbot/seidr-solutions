from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = []
    for num in numbers:
        if num not in unique_numbers:
            unique_numbers.append(num)
    return unique_numbers