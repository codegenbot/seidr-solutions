def is_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

a_value = int(input("Enter a value for a: "))
b_value = int(input("Enter a value for b: "))
c_value = int(input("Enter a value for c: "))

result = is_pythagorean_triplet(a_value, b_value, c_value)