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
op = input()
while op:
    ops.append(op.strip())
    op = input()

print(below_zero(ops))