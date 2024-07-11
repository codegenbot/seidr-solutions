def below_zero(operations: List[int]) -> bool:
    balance = 0
    for op in operations:
        if balance + op < 0:
            return True
        balance += op
    return False