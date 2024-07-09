def add(x, y):
    return x + y

try:
    input_str = input("Enter two integers separated by space: ")
    x, y = map(int, input_str.split())

    result = add(x, y)
    print(result)
except ValueError:
    print("Invalid input. Please enter valid integers.")