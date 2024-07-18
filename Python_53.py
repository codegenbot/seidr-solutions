def add(x: int, y: int) -> int:
    return x + y

inputs = input("Enter the numbers separated by comma: ")
x, y = map(int, inputs.split(','))
result = add(x, y)
print(result)