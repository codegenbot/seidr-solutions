def modp(a, b):
    if b == 0:
        return "Error: Division by zero is not allowed"
    else:
        return a % b

print(check(lambda a, b: modp(a, b)))