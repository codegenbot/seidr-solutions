def modp(x, y):
    if y == 0:
        return "Error: Division by zero"
    else:
        return x % y

def check(f):
    if f == modp:
        return "Modular Polynomial Arithmetic Function is Correct"
    else:
        return "Error: Not a Modular Polynomial Arithmetic Function"

print(check(modp))