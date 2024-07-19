def add(x: int, y: int) -> int:
    return x + y

try:
    a, b = map(int, input().split())
except ValueError:
    print("Please provide two integers separated by a space.")
else:
    result = add(a, b)
    print(result)