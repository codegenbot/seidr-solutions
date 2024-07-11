from typing import list

def remove_duplicates(numbers: list) -> list:
    seen = set()
    for num in numbers:
        seen.add(num)
    return list(seen)