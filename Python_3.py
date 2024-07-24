```
from typing import List

def below_zero(operations: List[str]) -> bool:
    ops = [int(op.strip()) for op in input("Enter operations (space-separated): ").split()]
    return any(op < 0 for op in ops)

print(below_zero([]))