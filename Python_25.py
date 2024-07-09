import sympy

def factorize(n):
    return sympy.factorint(n)

try:
    print("Please enter an integer:")
    n = int(input().strip())
    if isinstance(n, int):
        result = factorize(n)
        print(result)
    else:
        print("Invalid input. Please enter an integer.")
except ValueError:
    print("Invalid input. Please enter an integer.")