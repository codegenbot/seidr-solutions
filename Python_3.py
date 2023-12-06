def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        if operation > 0:
            balance += operation
        else:
            if balance < 0:
                return True
            balance += operation
    return False