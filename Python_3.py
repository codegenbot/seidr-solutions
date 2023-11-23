from typing import List, Union

def below_zero(operations: List[Union[int, float]]) -> bool:
    try:
        if not operations:
            return False
        
        balance = 0
        for operation in operations:
            balance -= operation
            if balance < 0:
                return True
        return False
    except:
        return False