```Python
def modp(x, y):
    return x % y

def check(function, arguments):
    if function(*arguments) == modp(*arguments):
        return f"{function.__name__} is Correct for {arguments}"
    else:
        return "Error: Not a Modular Polynomial Arithmetic Function"