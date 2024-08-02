from typing import Tuple

def add(x: int, y: int) -> int:
    return x + y

def get_input() -> Tuple[int, int]:
    x = int(input("Enter the first number: "))
    y = int(input("Enter the second number: "))
    return x, y

x, y = get_input()
result = add(x, y)
print(result)