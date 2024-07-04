from typing import List
import sys

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False

if __name__ == "__main__":
    input_lines = sys.stdin.read().strip()
    try:
        if not input_lines:
            print("Invalid input. Please enter space-separated integers.")
        else:
            operations = list(map(int, input_lines.split()))
            print(below_zero(operations))
    except ValueError:
        print("Invalid input. Please enter space-separated integers.")