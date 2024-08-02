def below_zero() -> bool:
    n = int(input())
    balance = 0
    for _ in range(n):
        operation = int(input())
        balance += operation
        if balance < 0:
            return True
    return False