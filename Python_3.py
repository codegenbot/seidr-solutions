from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

operation_str = input().strip()
operations = list(map(int, operation_str.split()))
print(below_zero(operations))