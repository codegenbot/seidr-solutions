from typing import List, Union

def below_zero(operations: List[Union[int, float]]) -> bool:
    balance = 0
    for operation in operations:
        balance -= operation
        if balance < 0:
            return True
    return False

operations = []

try:
    n = int(input())
except ValueError:
    print("Invalid input.")
    exit()

for _ in range(n):
    try:
        operation = float(input())
    except ValueError:
        print("Invalid input.")
        exit()
    operations.append(operation)

result = below_zero(operations)

print(result)