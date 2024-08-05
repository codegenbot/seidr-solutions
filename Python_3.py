from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for op in operations:
        if int(op) < 0:
            return True
    return False

operations = [int(x) for x in input().split()]
result = below_zero(operations)
print(result)