```
from typing import List


def remove_duplicates() -> List[int]:
    numbers = list(map(int, input().split(',')))
    return sorted(set(numbers))


print(remove_duplicates())