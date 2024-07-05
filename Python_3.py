from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False

if __name__ == "__main__":
    try:
        operations = list(map(int, input("Enter space-separated integers: ").strip().split()))
        print(below_zero(operations))
    except ValueError:
        print("Invalid input. Please enter space-separated integers.")