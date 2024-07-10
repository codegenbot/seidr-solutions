def add(x: int, y: int):
    return x + y


input_string = input().strip()
x, y = map(int, input_string.split())
result = add(x, y)
print(result)