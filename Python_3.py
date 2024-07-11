from typing import List

def below_zero(operations: List[str]) -> bool:
    balance = 0
    for operation in operations:
        if '-' in operation or '+' in operation:
            sign, num = operation[0], int(operation[1:])
            if sign == '-':
                balance -= num
            else:
                balance += num
        if balance < 0:
            return True
    return False

operations = input("Enter space separated operations (e.g., -5 +3 -2): ")
operations = [op for op in operations.split() if op]
print(below_zero(operations))