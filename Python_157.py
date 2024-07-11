# Read input from the user
a = int(input("Enter the value of a: "))
b = int(input("Enter the value of b: "))
c = int(input("Enter the value of c: "))

def is_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

# Correct function call
result = is_pythagorean_triplet(a, b, c)