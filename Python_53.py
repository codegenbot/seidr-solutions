def multiply_two_numbers(x, y):
    return x * y

x, y = map(int, input().split())
result = multiply_two_numbers(x, y)
print(result)