[PYTHON]
def get_gcd(a, b):
    if a == 0:
        return b
    return get_gcd(b % a, a)
[/PYTHON]
[TESTS]
# Test case 1:
assert get_gcd(12, 15) == 3
# Test case 2:
assert get_gcd(10, 17) == 1
# Test case 3:
assert get_gcd(14, 21) == 7
[/TESTS]
