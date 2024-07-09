def add(x, y):
    return x + y

try:
    x = int(input())
    y = int(input())

    result = add(x, y)
    print(result)
except ValueError:
    print("Invalid input. Please enter valid integers.")