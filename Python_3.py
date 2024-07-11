def below_zero(operations: List[int]) -> bool:
    if not isinstance(operations, list):
        return None

    for operation in operations:
        if not isinstance(operation, int):
            return None

    return any(op < 0 for op in operations)