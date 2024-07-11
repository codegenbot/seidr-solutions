from typing import List

def below_zero() -> bool:
    operations = [int(x) for x in input("Enter space-separated integers: ").split()]
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False