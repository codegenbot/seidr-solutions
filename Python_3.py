from typing import list

def below_zero() -> bool:
    operations = [int(i) for i in input("Enter some numbers separated by spaces: ").split()]
    return any(op < 0 for op in operations)