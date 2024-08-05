def add(x: int, y: int) -> int:
    return x + y

try:
    x, y = map(int, input().split())
except ValueError:
    print("Invalid input. Please provide two integer values separated by space.")
else:
    result = add(x, y)
    print(result)