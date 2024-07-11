```
from typing import List


def below_zero(operations: List[str]) -> bool:
    balance = 0
    for operation in operations:
        if operation[0] == "-":
            balance -= int(operation[1:])
        else:
            balance += int(operation[1:])
        if balance < 0:
            return True
    return False


ops = []
while True: 
    op = input().strip()
    if op.lower() == "stop": 
        break
    ops.append(op)
print(below_zero(ops))