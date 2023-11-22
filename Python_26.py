from typing import List

def remove_duplicates(numbers: list) -> list:
    return list(dict.fromkeys(numbers))