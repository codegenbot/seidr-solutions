from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

operations = []

try:
    operations = list(map(int, input("Enter space-separated integers: ").split()))
except ValueError:
    print("Invalid input. Please enter integers only.")
    exit(1)

print(below_zero(operations))