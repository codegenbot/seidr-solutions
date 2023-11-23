def add(x, y):
    return x + y

inputs = ['2 3']
x, y = map(int, inputs[0].split())
print(add(x, y))