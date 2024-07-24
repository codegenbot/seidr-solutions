from typing import List

def below_zero(input_operations: List[str]) -> bool:
    input_operations = [op.strip() for op in input("Enter operations (space-separated): ").split()]
    return any(int(op) < 0 for op in input_operations)

if __name__ == "__main__":
    if len(input("Enter operations (space-separated): ").split()) > 0:
        print(not below_zero([]))
    else:
        print("Program did not receive expected input")