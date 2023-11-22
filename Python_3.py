def below_zero() -> bool:
    n = int(input())
    operations = []
    for _ in range(n):
        operation = int(input())
        operations.append(operation)
    
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False