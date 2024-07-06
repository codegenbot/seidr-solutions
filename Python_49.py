def modp(x, y):
    return x % y

def check(f):
    if f == lambda x, y: x % y:
        return "Modular Polynomial Arithmetic Function is Correct"
    else:
        return "Error: Not a Modular Polynomial Arithmetic Function"

print(check(modp))