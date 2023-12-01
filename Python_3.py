from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False


n = 5

operations = []
for i in range(n):
    operation = list(map(int, input().split()))
    operations.append(operation)

result = below_zero(operations)
print(result)