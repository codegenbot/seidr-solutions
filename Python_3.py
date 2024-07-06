```
def below_zero(operations: List[int]) -> bool:
    balance = 0
    was_below = False
    for operation in operations:
        balance += operation
        if balance < 0:
            was_below = True
        elif was_below:
            return True
    return False