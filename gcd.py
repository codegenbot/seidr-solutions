[PYTHON]
def gcd(a, b):
    while b != 0:
        if a % b == 0:
            return b
        else:
            a = b
            b = a % b
    return a
[/PYTHON]
[TESTS]
# Test case 1:
assert gcd(1, 1) == 1
# Test case 2:
assert gcd(4, 400000) == 4
# Test case 3:
assert gcd(54, 24) == 6
# Test case 4:
assert gcd(4200, 3528) == 168
# Test case 5:
assert gcd(820000, 63550) == 2050
[/TESTS]
