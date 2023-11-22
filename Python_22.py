from typing import List, Any


def filter_integers() -> List[int]:
    values = input().split()
    return [int(x) for x in values if x.isdigit()]