from typing import List

def get_values() -> List[str]:
    values = input("Enter some values (separated by space): ")
    return [value for value in values.split() if value.isdigit()]

def filter_integers() -> List[int]:
    result = get_values()
    return [int(value) for value in result]