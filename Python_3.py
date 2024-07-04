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
        input_line = input().strip()
        if not input_line:
            print("Invalid input. Please enter space-separated integers.")
        else:
            operations = list(map(int, input_line.split()))
            print(below_zero(operations))
    except ValueError:
        print("Invalid input. Please enter space-separated integers.")