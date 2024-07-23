from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    operations = list(map(int, input("Enter space-separated integers: ").split()))
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False

print(below_zero([]))