from typing import List

def below_zero(operations: List[int]) -> bool:
    operations = [int(input()) for _ in range(len(operations))]
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False