def add(x: int, y: int) -> int:
    return x + y

try:
    x, y = map(int, input().split())
except ValueError:
    print("Input values should be integers separated by a space")
else:
    result = add(x, y)
    print(result)