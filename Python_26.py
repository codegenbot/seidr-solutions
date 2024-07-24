from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    unique_numbers = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            unique_numbers.append(num)
    return unique_numbers