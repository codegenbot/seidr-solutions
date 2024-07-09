from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

input_operations = list(map(int, input().split()))
result = below_zero(input_operations)
print(result)