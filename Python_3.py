def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

below_zero([1, 2, 3])
below_zero([1, 2, -4, 5])