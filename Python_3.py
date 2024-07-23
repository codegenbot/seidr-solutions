from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    user_input = input("Enter space-separated integers: ")
    operations = list(map(int, user_input.split()))
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False

print(below_zero([]))