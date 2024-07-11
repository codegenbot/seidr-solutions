from typing import list

def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    result = []
    for num in sorted(numbers):
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result