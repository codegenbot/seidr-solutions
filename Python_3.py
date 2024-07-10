def below_zero(operations: List[int]) -> bool:
    min_temp = float("inf")
    for operation in operations:
        if operation < min_temp:
            min_temp = operation
    return min_temp < 0