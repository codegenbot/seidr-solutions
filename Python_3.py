def below_zero(operations: list) -> bool:
    if not isinstance(operations, list):
        return False

    balance = sum(i for i in operations if i < 0)

    return balance < 0