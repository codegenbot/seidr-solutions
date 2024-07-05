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
    input_data = sys.stdin.read().strip()
    operations = list(map(int, input_data.split()))
    print("YES" if below_zero(operations) else "NO")