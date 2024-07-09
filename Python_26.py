from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result

numbers = [1, 2, 2, 3, 4, 4]
print(remove_duplicates(numbers))