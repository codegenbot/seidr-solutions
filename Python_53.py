def add(x: int, y: int) -> int:
    return x + y

input_values = input().split()
x, y = map(int, input_values)
result = add(x, y)
print(result)