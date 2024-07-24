import sys

values = list(map(int, sys.stdin.read().strip().split()))
from typing import List, Any


def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]