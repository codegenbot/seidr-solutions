def add(x: int, y: int) -> int:
    return x + y

try:
    a, b = map(int, input().split())
    result = add(a, b)
    print(result)
except ValueError:
    print("Input must be two integers separated by a space")