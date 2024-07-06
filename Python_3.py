```Python
def below_zero(operations: List[int]) -> bool:
    return any(num < 0 for num in operations)