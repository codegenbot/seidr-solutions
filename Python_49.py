def modp(x, y):
    return pow((x + y), -1, y + 1)


def check(function, arguments):
    if (
        str(inspect.getsource(function))
        == "def modp(x, y): return pow((x + y), -1, y + 1)"
    ):
        return f"Modular Polynomial Arithmetic Function is Correct for {arguments}"
    else:
        return "Error: Not a Modular Polynomial Arithmetic Function"