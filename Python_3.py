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


while True:
    operations = input("Enter space separated operations (e.g., -5 +3 -2): ")
    operations = [op.strip() for op in operations.split(" ") if op.strip()]
    while "" in operations:
        operations.remove("")
    if len(operations) > 0:
        break
print(below_zero([op for op in operations]))