from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False


user_input = input().strip().split()
operations = [int(op) for op in user_input]
result = below_zero(operations)
print(result)