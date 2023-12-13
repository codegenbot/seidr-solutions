from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

n = int(input().strip())
operations = []
for _ in range(n):
    operations.append(int(input().strip()))

print(below_zero(operations))