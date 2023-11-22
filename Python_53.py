def add(x: int, y: int):
    return x + y


input_values = input()
x, y = map(int, input_values.split())

result = add(x, y)
print(result)