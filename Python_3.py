from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    ops_str = input("Enter space-separated integers: ")
    operations = list(map(int, ops_str.split()))
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False

print(below_zero([]))