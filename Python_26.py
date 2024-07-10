```
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [i for i in set(map(int, numbers))]