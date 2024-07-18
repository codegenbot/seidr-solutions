def below_zero(operations: list[int]) -> bool:
    count = sum(1 for num in operations if num < 0)
    return count > 0