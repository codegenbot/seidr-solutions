```
from typing import List

def below_zero(operations: List[str]) -> bool:
    inp = input("Enter operations (space-separated): ")
    ops = [i.strip() for i in inp.split()]
    return any(int(op) < 0 for op in ops)

print(below_zero(input().split()))