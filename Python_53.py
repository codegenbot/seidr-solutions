def add(x: int, y: int):
    return x + y

print("Enter two integers separated by space:")
a, b = map(int, input().split())
result = add(a, b)
print(result)