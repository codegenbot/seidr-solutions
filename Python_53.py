def add(x: int, y: int) -> int:
    return x + y


print("Enter two integers separated by space:")
x, y = map(int, input().split())
result = add(x, y)
print(result)