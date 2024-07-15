def check_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

a_value = float(input("Enter a value: "))
b_value = float(input("Enter b value: "))
c_value = float(input("Enter c value: "))

result = check_pythagorean_triplet(a_value, b_value, c_value)
print(result)