def add(x: int, y: int):
    return x + y

input_str = input()
a, b = map(int, input_str.split())
result = add(a, b)
print(result)