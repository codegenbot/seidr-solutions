try:
    a_value = int(input("Enter first integer: "))
    b_value = int(input("Enter second integer: "))
    c_value = int(input("Enter third integer: "))
    def is_pythagorean_triplet(a, b, c):
        return a ** 2 + b ** 2 == c ** 2 or a ** 2 + c ** 2 == b ** 2 or b ** 2 + c ** 2 == a ** 2
    result = is_pythagorean_triplet(a_value, b_value, c_value)
    print(result)
except ValueError:
    print("Please enter a valid integer.")