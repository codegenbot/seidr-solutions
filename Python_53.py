def add(a, b):
    return a + b

print("Enter two integers:")
x, y = map(int, input().strip().split())
result = add(x, y)
print(result)