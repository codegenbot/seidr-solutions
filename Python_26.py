from typing import List


def remove_duplicates() -> List[int]:
    numbers = list(map(int, input().split()))
    return sorted(list(set(numbers)))