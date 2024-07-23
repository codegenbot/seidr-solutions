```
from typing import List


def below_zero() -> bool:
    operations = []
    while True:
        op = int(input("Enter an operation (0 to stop): "))
        if op == 0:
            break
        operations.append(op)
    
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False