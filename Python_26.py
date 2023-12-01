from typing import List

def remove_duplicates(numbers: list[int]) -> list[int]:
    return list(dict.fromkeys(numbers))