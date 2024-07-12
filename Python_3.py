def below_zero(operations: str) -> bool:
    balance = 0
    for operation in map(int, operations.split()):
        balance += operation
        if balance < 0:
            return True
    return False