```
from typing import List
import sys

values = list(map(int, sys.stdin.read().strip().split()))

def filter_integers(values: List[int]) -> List[int]:
    return [value for value in values if isinstance(value, int)]

print(filter_integers(values))