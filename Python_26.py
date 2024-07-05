from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = []
    seen = set()
    for num in numbers:
        if num not in seen:
            unique_numbers.append(num)
            seen.add(num)
    return unique_numbers