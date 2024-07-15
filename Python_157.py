def check_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

print("Enter three numbers representing sides of a triangle to check for Pythagorean triplet:")
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
c = int(input("Enter third number: "))

result = check_pythagorean_triplet(a, b, c)
print(result)