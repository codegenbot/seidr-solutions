```
from typing import List

def below_zero(ops: List[str]) -> bool:
    ops = [op.strip() for op in input("Enter operations (space-separated): ").split()]
    return any(int(op) < 0 for op in ops)

if not below_zero([]):
    print("Program received expected input")
else:
    print("Program did not receive expected input")