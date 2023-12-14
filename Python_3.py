from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

n = int(input("Enter the number of operations: "))
operations = list(map(int, input("Enter the operations separated by space: ").split()))

print(str(below_zero(operations)))