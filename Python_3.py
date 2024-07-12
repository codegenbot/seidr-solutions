from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

num_operations = int(input())
operations = list(map(int, input().split()[:num_operations]))
result = below_zero(operations)
print(result)