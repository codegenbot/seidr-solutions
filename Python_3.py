from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False

if __name__ == "__main__":
    import sys
    operations = [int(line.strip()) for line in sys.stdin]
    print(below_zero(operations))