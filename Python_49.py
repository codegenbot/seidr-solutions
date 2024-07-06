def modp(x, y):
    if y == 0:
        return "Error: Division by zero"
    else:
        return x % y

print(modp(10,3))