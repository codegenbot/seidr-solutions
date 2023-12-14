from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

operations = []
n = int(input())
for i in range(n):
    operation = int(input())
    operations.append(operation)

print(below_zero(operations))