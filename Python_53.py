def add(x, y):
    return x + y

x, y = map(int, raw_input("Enter two numbers separated by space: ").strip().split())
result = add(x, y)
print(result)