def multiply(x: int, y: int) -> int:
    return x * y

x, y = map(int, input().split())
result = multiply(x, y)
print(result)