```
from typing import List

def below_zero(ops: List[str]) -> bool:
    ops = [op.strip() for op in input("Enter operations (space-separated): ").split()]
    return any(int(op) < 0 for op in ops)

print(not below_zero([])) if len(ops) > 0 else print("Program did not receive expected input")