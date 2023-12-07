[PYTHON]
def get_probability(n, m):
    from math import factorial
    if m > n:
        return (factorial(m) * factorial(n)) / (factorial(m + n) * (m - n))
    elif m < n:
        return 0
    else:
        return (factorial(n) * factorial(m)) / (factorial(n + m) * (n - m))
[/PYTHON]
[TESTS]
# Test case 1:
assert get_probability(4, 6) == 0
# Test case 2:
assert get_probability(6, 4) == 1 / 3
# Test case 3:
assert get_probability(4, 4) == 1 / 2
# Test case 4:
assert get_probability(10, 20) == 1 / 11
# Test case 5:
assert get_probability(10, 10) == 1
[/TESTS]
