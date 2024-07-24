def add(x: int, y: int):
    return x + y

x, y = map(int, input("Enter two integers separated by space: ").strip().split())
result = add(x, y)
print(result)