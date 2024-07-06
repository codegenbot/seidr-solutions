def modp(x, y):
    return x % y


def check(function, arguments):
    if function(3, 5) == 3:
        if function(11, 7) % 7 == 4 and function(10, 3) % 3 == 1:
            return f"Modular Polynomial Arithmetic Function is Correct for {arguments}"
    return "Error: Not a Modular Polynomial Arithmetic Function"