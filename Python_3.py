```
def below_zero(operations: List[int]) -> bool:
    if not isinstance(operations, list):
        return False
    
    for operation in operations:
        if not isinstance(operation, int):
            return False
    
    balance = sum(operations)
    return balance < 0