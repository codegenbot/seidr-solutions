def multiply_two_numbers(x, y):
    return x * y

x, y = map(int, input("Please enter two integers separated by a space: ").split())
result = multiply_two_numbers(x, y)
print(result)