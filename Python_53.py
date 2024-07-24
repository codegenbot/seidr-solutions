def add(x: int, y: int):
    return x + y

input_str = input("Enter two integers separated by space: ").strip()
x, y = map(int, input_str.split())
result = add(x, y)
print(result)