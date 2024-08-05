def add(x: int, y: int) -> int:
    return x + y

try:
    x, y = map(int, input().split())
    result = add(x, y)
    print(result)
except ValueError:
    print("Please provide two integer values separated by a space.")