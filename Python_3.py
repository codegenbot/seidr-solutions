def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        if balance + operation < 0:
            return True
        balance += operation
    return False