```
from typing import List

def below_zero(operations: List[str]) -> bool:
    balance = 0
    for operation in operations:
        if operation[0] == '-':
            balance -= int(operation)
        else:
            balance += int(operation)
        if balance < 0:
            return True
    return False

while True:
    operations = input("Enter space separated operations (e.g., -5 +3 -2): ")
    operations = [op for op in operations.split() if op]
    if all(map(str.isdigit, operation) or (operation[0] == '-' and str(int(operation)).isdigit()) for operation in operations):
        break
print(below_zero(operations))