from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Convert input to list of integers
operations = [int(x) for x in input().replace(',', ' ').split()]

print(below_zero(operations))