def add(x: int, y: int) -> int:
    return x + y

try:
    x, y = map(int, input("Enter two integers separated by space: ").split())
    result = add(x, y)
    print(result)
except ValueError:
    print("Please enter valid integers separated by space.")