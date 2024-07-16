a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
c = int(input("Enter third number: "))

def is_pythagorean_triple(a, b, c):
    return sorted([a, b, c])[0] ** 2 + sorted([a, b, c])[1] ** 2 == sorted([a, b, c])[2] ** 2

print(is_pythagorean_triple(a, b, c))