```
from typing import List

def remove_duplicates() -> List[int]:
    try:
        numbers = input("Enter a list of space-separated numbers: ")
        numbers = [int(num) for num in numbers.split()]
    except ValueError:
        return []
    seen = set()
    result = []
    for num in sorted(numbers):
        if num not in seen:
            result.append(num)
            seen.add(num)
    return result