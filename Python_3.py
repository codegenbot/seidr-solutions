from typing import List


def below_zero(operations: List[str]) -> bool:
    balance = 0
    for operation in operations:
        if operation[0] == "+":
            balance += int(operation[1:])
        elif operation[0] == "-":
            balance -= int(operation[1:])
    return balance < 0


while True:
    operations = input().split()
    while "" in operations:
        operations.remove("")
    operations = [op.strip() for op in operations]
    if len(operations) > 0:
        break
print(below_zero([op for op in operations]))