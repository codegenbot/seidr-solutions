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
    input = sys.stdin.read
    operations = list(map(int, input().strip().split()))
    print(below_zero(operations))