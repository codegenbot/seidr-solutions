def below_zero(operations: List[int]) -> bool:
    if not isinstance(operations, list):
        return False

    balance = sum(i for i in operations if i < 0)

    return balance < 0