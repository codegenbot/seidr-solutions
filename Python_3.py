from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False

try:
    operations = [int(x) for x in input("Enter space-separated integers: ").split()]
    result = below_zero(operations)
    print(result)
except:
    print("No input provided.")