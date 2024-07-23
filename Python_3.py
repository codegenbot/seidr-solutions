```
def below_zero(operations: List[int]) -> bool:
    balance = sum(operations)
    return balance < 0