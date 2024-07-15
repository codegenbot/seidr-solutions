def check_expression(x, n):
    return x > 0 and n > 0 and x == n ** int(x ** (1 / n))

x = int(input("Enter value for x: "))
n = int(input("Enter value for n: "))

result = check_expression(x, n)
print(result)