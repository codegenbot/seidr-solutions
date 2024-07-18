def add(x: int, y: int) -> int:
    return x + y


# Separate input reading functionality
a, b = map(int, input().split())
result = add(a, b)
print(result)