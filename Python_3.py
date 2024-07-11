from typing import List

def below_zero() -> bool:
    while True:
        try:
            operations = list(map(int, input("Enter integers separated by spaces: ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter only integers separated by spaces.")
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

print(below_zero())