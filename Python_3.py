from typing import List

def below_zero(operations: List[str]) -> bool:
    return any(int(op) < 0 for op in operations)

inp = input("Enter operations (space-separated): ")
ops = [i.strip() for i in inp.split()]
print(below_zero(ops))