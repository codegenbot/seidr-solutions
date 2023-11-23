def add(x, y):
    return x + y

x, y = map(int, input("Enter two numbers: ").split())
print("Sum:", add(x, y))