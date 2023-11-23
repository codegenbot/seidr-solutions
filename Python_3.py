from typing import List, Union

def below_zero() -> bool:
    operations = [float(x) for x in input().split()]
    balance = 0
    for operation in operations:
        balance -= operation
        if balance < 0:
            return True
    return False