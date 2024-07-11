```
from typing import List

def below_zero(operations: List[int]) -> bool:
    if not isinstance(operations, list):
        return None
    
    for operation in operations:
        if not isinstance(operation, int):
            return None
    
    balance = sum(operations)
    return balance < 0