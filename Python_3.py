from typing import List

def below_zero(operations: List[str]) -> bool:
    return any(int(op) < 0 for op in operations)

ops = input("Enter operations (space-separated): ").split()
print(below_zero(ops))