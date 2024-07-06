import inspect


def modp(x, y):
    return x % y


def check(f):
    if str(inspect.getsource(f)) == "def modp(x, y): return x % y":
        return "Modular Polynomial Arithmetic Function is Correct"
    else:
        return "Error: Not a Modular Polynomial Arithmetic Function"


print(check(modp))