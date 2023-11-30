from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False


operations = []
while True:
    try:
        operation = int(input())
        operations.append(operation)
    except ValueError:
        break

result = below_zero(operations)
print(result)