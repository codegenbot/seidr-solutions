def is_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

def check(func):
    assert func(3, 4, 5) == True
    assert func(5, 12, 13) == True
    assert func(8, 15, 17) == True
    assert func(1, 2, 3) == False

check(is_pythagorean_triplet)