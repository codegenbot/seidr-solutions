def add(x: int, y: int):
    return x + y

input_string = input('Enter two integers separated by a space: ').strip()
x, y = map(int, input_string.split())
result = add(x, y)
print(result)