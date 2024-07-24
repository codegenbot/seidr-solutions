```
from typing import List


def remove_duplicates(input_str: str) -> List[int]:
    return list(set(map(int, input_str.split(','))))