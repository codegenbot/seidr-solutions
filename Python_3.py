from typing import List

def below_zero() -> bool:
    operations = list(map(int, input("Enter integers separated by spaces: ").split()))
    balance = 0
    for operation in range(0, len(operations), 2):
        if operations[operation] == 1:
            balance += operations[operation + 1]
        else:
            balance -= operations[operation + 1]
        if balance < 0:
            return True
    return False

print(below_zero())