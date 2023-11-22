from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False


operations = input().strip().split()
operations = list(map(int, operations))

print(below_zero(operations))