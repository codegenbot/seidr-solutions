def is_pythagorean_triple(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
c = int(input("Enter the third number: "))

result = is_pythagorean_triple(a, b, c)
print(result)