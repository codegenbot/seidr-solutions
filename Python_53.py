def add(x: int, y: int):
    return x + y

a, b = map(int, input("Enter two numbers separated by a space: ").split())
result = add(a, b)
print(result)