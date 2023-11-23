from typing import List, Union

def below_zero(operations: List[Union[int, float]]) -> bool:
    balance = 0
    for operation in operations:
        balance -= operation
        if balance < 0:
            return True
    return False

operations = list(map(float, input().split()))

result = below_zero(operations)

print(result)