def is_pythagorean_triple(a, b, c):
    return a ** 2 + b ** 2 == c ** 2

a = int(input("Enter value of a: "))
b = int(input("Enter value of b: "))
c = int(input("Enter value of c: "))
print(is_pythagorean_triple(a, b, c))