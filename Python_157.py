def check_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

# Call the function with appropriate arguments
result = check_pythagorean_triplet(a_value, b_value, c_value)