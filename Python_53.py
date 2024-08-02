def add(x: int, y: int) -> int:
    return x + y

inputs = input().split()
x, y = map(int, inputs)

result = add(x, y)
print(result)