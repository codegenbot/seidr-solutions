[PYTHON]
def probability(n, m):
    p = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                p += 1.0 / (n * m)
    return p
[/PYTHON]
[TESTS]
# Test case 1:
assert probability(2, 3) == 1.0 / 6
# Test case 2:
assert probability(4, 6) == 1.0 / 24
# Test case 3:
assert probability(8, 10) == 1.0 / 40
[/TESTS]
