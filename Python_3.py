from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

n = int(raw_input())
operations = list(map(int, raw_input().split()))

print(str(below_zero(operations)))