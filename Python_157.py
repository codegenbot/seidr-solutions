def check_pythagorean_triplet(a, b, c):
    return (a**2 + b**2 == c**2) or (a**2 + c**2 == b**2) or (b**2 + c**2 == a**2) and a != 0 and b != 0 and c != 0

a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
c = int(input("Enter third number: "))

result = check_pythagorean_triplet(a, b, c)
print(result)