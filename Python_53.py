def add(x: int, y: int):
    return x + y

input_str = input("Enter two integers separated by space: ").split()
x, y = map(int, input_str)
result = add(x, y)
print(result)