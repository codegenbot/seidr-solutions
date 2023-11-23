from typing import List, Union

def below_zero(operations: List[Union[int, float]]) -> bool:
    balance = 0
    for operation in operations:
        balance -= operation
        if balance < 0:
            return True
    return False

operations = []

for _ in range(len(operations)):
    operation = float(input())
    operations.append(operation)

result = below_zero(operations)

print(result)