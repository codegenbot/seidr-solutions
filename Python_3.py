from typing import List

def below_zero(operations: List[str]) -> bool:
    inp = " ".join(operations)
    ops = [i.strip() for i in inp.split()]
    return any(int(op) < 0 for op in ops)

ops = input("Enter operations (space-separated): ").split()
print(below_zero(ops))