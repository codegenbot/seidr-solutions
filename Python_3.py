```
from typing import List


def below_zero(operations: str) -> bool:
    result = 0
    for op in operations.split(','):
        if 'increase' in op:
            result += int(op.split(' ')[2])
        elif 'decrease' in op:
            result -= int(op.split(' ')[2])
        else:
            return False
    
    return result < 0