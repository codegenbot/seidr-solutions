Here is the completed code for the GCD problem:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

# Doctest will automatically test this function with provided input and expected output.