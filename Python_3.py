from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

if __name__ == "__main__":
    operations = list(map(int, input("Enter the list of operations separated by spaces: ").split()))
    print(below_zero(operations))