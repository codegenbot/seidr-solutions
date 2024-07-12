from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

try:
    operations = list(map(int, input().strip().split()))
except ValueError:
    print("Input must be space-separated integers.")
    exit()

result = below_zero(operations)
print(result)