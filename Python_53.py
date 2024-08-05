def add(x: int, y: int) -> int:
    return x + y

try:
    user_input = input().split()
    x, y = map(int, user_input)
    result = add(x, y)
    print(result)
except ValueError:
    print("Input values must be integers separated by space")