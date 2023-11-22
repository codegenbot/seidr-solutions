from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

operations = []
while True:
    try:
        operations = list(map(int, input("Enter space-separated integers: ").split()))
        break
    except ValueError:
        print("Invalid input. Please enter integers only.")

print(below_zero(operations))