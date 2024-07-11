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
for op in input().split():
    if op: 
        ops.append(op.strip())
while len(ops) > 1: 
    for i in range(len(ops)-1, -1, -1):
        ops.pop() 
print('''{}''').format(below_zero(ops))