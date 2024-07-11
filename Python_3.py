from typing import List

def below_zero() -> bool:
    operations = list(input("Enter operations (+/-) and integers separated by spaces: ").split(','))
    balance = 0
    for operation in operations:
        op, num = operation.split()
        num = int(num)
        if op == '+':
            balance += num
        elif op == '-':
            balance -= num
        if balance < 0:
            return True
    return False

print(below_zero())