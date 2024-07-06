from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    if not isinstance(numbers, list):
        return "Invalid input"
    numbers = [num for num in numbers if isinstance(num, int)]
    seen = set()
    result = []
    for num in sorted(numbers):
        if num not in seen:
            result.append(num)
            seen.add(num)
    return result