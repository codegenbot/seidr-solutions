```Python
from typing import List


def below_zero(operations: List[str]) -> bool:
    balance = 0
    for i in range(0, len(operations), 2):
        num = int(operations[i])
        if operations[i-1] == "-":
            balance -= num
        else:
            balance += num
    return balance < 0


while True:
    operations = input("Enter space separated operations (e.g., -5 +3 -2): ").lower().split()
    while "" in operations:
        operations.remove("")
    if len(operations) % 2 != 0:
        print("Program did not receive expected input")
    else:
        break

print(below_zero(operations))