[PYTHON]
def get_gcd(a, b):
    while b != 0:
        remainder = a % b
        a = b
        b = remainder
    return a
[/PYTHON]
[TESTS]
# Test case 1:
assert get_gcd(10, 15) == 5
# Test case 2:
assert get_gcd(10, 0) == 10
# Test case 3:
assert get_gcd(0, 15) == 15
[/TESTS]
