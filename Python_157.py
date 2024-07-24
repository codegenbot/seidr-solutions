def is_pythagorean_triple(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2


def check(func):
    if func(3, 4, 5):
        print("It's a Pythagorean triple.")
    else:
        print("It's not a Pythagorean triple.")


check(is_pythagorean_triple)