from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False

# Input
operations = list(map(int, input().split()))

# Output
print(below_zero(operations))