def modp(x, y):
    if y == 0:
        return "Error: Division by zero"
    else:
        return x % y

modp = lambda x, y: x % y
print(check(modp))