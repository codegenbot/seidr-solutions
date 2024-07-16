def add(x: int, y: int) -> int:
    return x + y

input_values = map(int, input().split())

result = add(*input_values)
print(result)