def below_zero() -> bool:
    operations = list(map(int, input().split()))
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False