def add(x: int, y: int) -> int:
    return x + y

try:
    x = int(input())
    y = int(input())
except ValueError:
    print("Please provide two integer inputs.")
else:
    result = add(x, y)
    print(result)