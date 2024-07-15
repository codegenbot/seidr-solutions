a_value = int(input("Enter the value for a: "))
b_value = int(input("Enter the value for b: "))
c_value = int(input("Enter the value for c: "))

def is_valid_pythagorean_triplet(a, b, c):
    values = [a, b, c]
    values.sort()
    return values[0]**2 + values[1]**2 == values[2]**2

def check_pythagorean_triplet(a, b, c):
    if is_valid_pythagorean_triplet(a, b, c):
        return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2
    else:
        return False

result = check_pythagorean_triplet(a_value, b_value, c_value)
print(result)