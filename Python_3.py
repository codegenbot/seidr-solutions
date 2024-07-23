def below_zero(operations: list[int]) -> bool:
    for operation in operations:
        if operation < 0:
            return True
    return False