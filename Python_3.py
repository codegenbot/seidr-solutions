def below_zero(operations: list[int]) -> bool:
    balance = 0
    if balance < 0:
        return True
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False