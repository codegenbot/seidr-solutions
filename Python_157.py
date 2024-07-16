def is_pythagorean_triple(a, b, c):
    return a ** 2 + b ** 2 == c ** 2

a, b, c = map(int, input("Enter values of a, b, c separated by space: ").split())
print(is_pythagorean_triple(a, b, c))