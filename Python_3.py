from typing import List

def below_zero(operations: List[str]) -> bool:
    return any(float(op).is_negative() for op in operations)