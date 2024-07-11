from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in map(int, input("Enter numbers separated by space: ").split()):
        if num not in seen:
            seen.add(num)
            result.append(num)