from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

print("Enter the number of operations:")
n = int(input())
print("Enter the operations separated by spaces:")
operations = list(map(int, input().split()))
result = below_zero(operations)
print(result)