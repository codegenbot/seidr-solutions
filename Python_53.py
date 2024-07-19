def add(a, b):
    return a + b

# read input from standard input
x, y = map(int, input("Enter two integers separated by a space: ").split())
result = add(x, y)
print(result)