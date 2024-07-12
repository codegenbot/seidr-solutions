def multiply_two_numbers(x, y):
    return x * y

try:
    print("Please enter two integers separated by a space:")
    x, y = map(int, input().split())
    result = multiply_two_numbers(x, y)
    print(result)
except ValueError:
    print("Invalid input. Please enter integers only.")