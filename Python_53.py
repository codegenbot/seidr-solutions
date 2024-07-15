def add(x: int, y: int) -> int:
    return x + y

# To receive input and return output
x, y = map(int, input().split())
result = add(x, y)
print(result)