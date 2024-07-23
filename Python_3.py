from typing import list

def below_zero(operations: list) -> bool:
    return any(int(op) < 0 for op in operations)