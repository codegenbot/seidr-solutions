def add(a, b):
    return a + b

x, y = map(int, input("Enter two numbers separated by a space: ").strip().split())
result = add(x, y)
print(result)