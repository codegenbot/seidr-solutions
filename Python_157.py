def is_pythagorean_triple(a, b, c):
    return a ** 2 + b ** 2 == c ** 2

a = int(input("Enter the value of a: "))
b = int(input("Enter the value of b: "))
c = int(input("Enter the value of c: "))
print(is_pythagorean_triple(a, b, c))