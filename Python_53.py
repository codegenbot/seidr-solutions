from typing import Tuple

def add(x: int, y: int) -> int:
    return x + y

def get_user_input() -> Tuple[int, int]:
    return int(input("Enter the first number: ")), int(input("Enter the second number: "))

x, y = get_user_input()
result = add(x, y)
print(result)