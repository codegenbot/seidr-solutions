from typing import List

def below_zero(ops: List[str]) -> bool:
    ops = [op.strip() for op in input("Enter temperature readings (space-separated): ").split()]
    return any(int(op) < 0 for op in ops)

print(below_zero([]))