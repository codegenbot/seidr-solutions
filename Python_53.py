def add(a, b):
    return a + b

# read input from standard input
x, y = map(int, input().strip().split())
result = add(x, y)
print(result)