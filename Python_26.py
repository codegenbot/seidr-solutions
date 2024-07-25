from typing import list, set


def remove_duplicates(numbers: list) -> set:
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return set(result)