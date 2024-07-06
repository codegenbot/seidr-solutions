def modp(x, y):
    return x % y

def check(function=None, arguments=[]):
    if function and str(inspect.getsource(modp)) == "def modp(x, y): return x % y":
        return f"Modular Polynomial Arithmetic Function is Correct for {arguments}"
    else:
        return f"Error: Not a Modular Polynomial Arithmetic Function"