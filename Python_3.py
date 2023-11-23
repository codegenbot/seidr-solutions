from typing import List, Union

def below_zero(operations: List[Union[int, float]]) -> bool:
    balance = 0
    for operation in operations:
        balance -= operation
        if balance < 0:
            return True
    return False

operations = []

n = int(input())
operations = [float(input()) for _ in range(n)]

result = below_zero(operations)

print(result)