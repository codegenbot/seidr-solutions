def below_zero(operations):
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False

operations = list(map(int, input().split()))
print(below_zero(operations))