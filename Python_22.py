from typing import List


def get_values() -> List[int]:
    values = input("Enter some integers (space separated): ").split()
    return [int(value) for value in values]


def filter_integers() -> List[int]:
    result = get_values()
    return [value for value in result if isinstance(value, int)]