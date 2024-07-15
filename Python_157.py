try:
    a_value = int(input("Enter the value for a: "))
    b_value = int(input("Enter the value for b: "))
    c_value = int(input("Enter the value for c: "))
except ValueError:
    print("Invalid input. Please enter integer values only.")
else:

    def check_pythagorean_triplet(a, b, c):
        return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

    result = check_pythagorean_triplet(a_value, b_value, c_value)
    print(result)