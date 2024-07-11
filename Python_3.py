from typing import List

def below_zero() -> bool:
    operations = list(map(int, input("Enter integers separated by spaces: ").split()))
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

print(below_zero())