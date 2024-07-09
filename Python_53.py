def add(x, y):
    return x + y

try:
    print("Enter two integers separated by space:")
    x, y = map(int, input().split())

    result = add(x, y)
    print(result)
except:
    print("Invalid input. Please enter valid integers separated by space.")