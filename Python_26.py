from typing import List


def remove_duplicates(numbers_str: str) -> List[int]:
    numbers = list(map(int, numbers_str.split(',')))
    return sorted(set(numbers))


print(remove_duplicates(input()))