from typing import list

def remove_duplicates(numbers: list) -> list:
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result