def add(x, y):
    return x + y

try:
    x, y = map(int, input("Enter two integers separated by space: ").strip().split())

    result = add(x, y)
    print(result)
except (ValueError, TypeError):
    print("Invalid input. Please enter valid integers separated by space.")