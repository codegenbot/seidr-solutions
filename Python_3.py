def below_zero(operations: List[int]) -> bool:
    if not isinstance(operations, list):
        return False
        
    balance = 0
    for operation in operations:
        if not isinstance(operation, int):
            return False
    
        balance += operation
        if balance < 0:
            return True
            
    return False