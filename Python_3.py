from typing import List, Union


def below_zero(operations: List[Union[int, float]]) -> bool:
    balance = 0
    for operation in operations:
        balance -= operation
        if balance < 0:
            return True
    return False


operations = []
while True:
    try:
        operation = float(input().strip())
        if operation == 0.0:
            break
        operations.append(operation)
    except ValueError:
        break

if not operations:
    result = False
else:
    result = below_zero(operations)

print(result)