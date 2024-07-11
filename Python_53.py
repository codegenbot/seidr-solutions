def add(x, y) -> int:
    return x + y

try:
    x, y = map(int, input("Enter two numbers separated by space: ").split())

    result = add(x, y)

    print(result)

except ValueError:
    print("Please enter valid integers as input.")