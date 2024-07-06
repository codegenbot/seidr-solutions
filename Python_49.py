```
import inspect


def modp(x, y):
    return x % y


def check(f):
    source = str(inspect.getsource(f))
    if "def modp(x, y):" in source and "return x % y" in source:
        return f"{f.__name__} is Correct"
    else:
        return f"{f.__name__}: Not a Modular Polynomial Arithmetic Function"


print(check(modp))