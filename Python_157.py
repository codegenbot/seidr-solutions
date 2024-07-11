try:
    a = int(input("Enter a: "))
    b = int(input("Enter b: "))
    c = int(input("Enter c: "))
except ValueError:
    print("Please enter valid integers for a, b, and c.")
    exit()


def is_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2


result = is_pythagorean_triplet(a, b, c)