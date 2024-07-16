def is_pythagorean_triple():
    a, b, c = map(int, input("Enter three numbers separated by space: ").split())
    return a ** 2 + b ** 2 == c ** 2

print(is_pythagorean_triple())