from typing import List


def remove_duplicates(input_string: str) -> List[str]:
    numbers = list(map(str, input_string.split(',')))
    return list(set(numbers))