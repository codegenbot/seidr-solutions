def below_zero(operations: List[int]) -> bool:
    below_zero = False
    for operation in operations:
        if operation < 0 and not below_zero:
            below_zero = True
    return below_zero