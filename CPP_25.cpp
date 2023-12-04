[PYTHON]
def factorize(n):
    factors = []
    while n % 2 == 0:
        factors.append(2)
        n //= 2
    for i in range(3, int(n**0.5) + 1, 2):
        while n % i == 0:
            factors.append(i)
            n //= i
    if n > 2:
        factors.append(n)
    return factors
[/PYTHON]
[TESTS]
# Test case 1:
assert factorize(8) == [2, 2, 2]
# Test case 2:
assert factorize(25) == [5, 5]
# Test case 3:
assert factorize(70) == [2, 5, 7]
[/TESTS]
