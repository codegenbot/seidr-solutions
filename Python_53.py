def multiply_two_numbers(x, y):
    return x * y

try:
    x, y = map(int, input().split())
    result = multiply_two_numbers(x, y)
    print(result)
except ValueError:
    print("Invalid input. Please enter two integers separated by a space.")