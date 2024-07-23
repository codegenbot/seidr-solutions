```
from typing import List

operations = list(map(int, input("Enter space-separated integers: ").split()))
print(below_zero(operations))

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False