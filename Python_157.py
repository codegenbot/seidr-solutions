a_value = int(input("Enter the value for a: "))
b_value = int(input("Enter the value for b: "))
c_value = int(input("Enter the value for c: "))

a_value = int(a_value)
b_value = int(b_value)
c_value = int(c_value)

def check_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

result = check_pythagorean_triplet(a_value, b_value, c_value)
print(result)