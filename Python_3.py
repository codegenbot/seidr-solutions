```
from typing import List


def below_zero(operations: List[str]) -> bool:
    balance = 0
    for operation in operations:
        if "-" in operation[0] or "+" in operation[0]:
            sign, num = operation[0], int(operation[1:])
            if sign == "-":
                balance -= num
            else:
                balance += num
        if balance < 0:
            return True
    return False


operations = input("Enter space separated operations (e.g., -5 +3 -2): ")
operations = [op.strip() for op in operations.split(',') if op.strip()[0] in "+-" and op != ""]
while " " in operations:
    operations = [num for num in operations.split(' ') if num]
print(below_zero([op.replace(" ", "") for op in operations]))