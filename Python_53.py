def add(x: int, y: int):
    return x + y

input_str = input().split()
a, b = map(int, input_str)
result = add(a, b)
print(result)