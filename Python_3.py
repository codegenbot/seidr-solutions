```
from typing import List


operations = list(map(int, input("Enter space-separated integers: ").split()))

def below_zero(ops: List[int]) -> bool:
    balance = 0
    for op in ops:
        balance += op
        if balance < 0:
            return True
    return False

print(below_zero(operations))