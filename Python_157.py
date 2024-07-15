a, b, c = input("Enter three integers separated by space: ").split()
a_value, b_value, c_value = int(a), int(b), int(c)

def check_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

result = check_pythagorean_triplet(a_value, b_value, c_value)
print(result)