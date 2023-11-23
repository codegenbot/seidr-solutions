def add(x, y):
    return x + y

x, y = map(int, input("Enter two numbers separated by a space: ").split())
print("Sum:", add(x, y))