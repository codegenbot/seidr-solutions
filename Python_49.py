def modp(x, y):
    return x % y


def check(function, arguments):
    if str(inspect.getsource(function)) == "def modp(x, y): return x % y":
        return f"Modular Polynomial Arithmetic Function is Correct for {arguments}"
    else:
        return "Error: Not a Modular Polynomial Arithmetic Function"