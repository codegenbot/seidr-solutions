def add(x: int, y: int) -> int:
    return x + y

# Read input from user
a, b = map(int, input().split())
result = add(a, b)
print(result)