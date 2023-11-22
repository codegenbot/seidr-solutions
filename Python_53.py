def add(x: int, y: int):
    return x + y


x, y = map(int, input().split())  # Provide the expected input when running the program

result = add(x, y)
print(result)