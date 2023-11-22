import sys

operations = list(map(int, sys.stdin.readline().strip().split()))

from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

print(below_zero(operations))