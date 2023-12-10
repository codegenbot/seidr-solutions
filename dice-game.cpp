[PYTHON]
def probability(n, m):
    p = 0.0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                p += 1.0 / (n * m)
    return round(p, 8)
[/PYTHON]
[TESTS]
# Test case 1:
assert probability(11, 92) == 0.054347824
# Test case 2:
assert probability(2, 6) == 0.16666666
# Test case 3:
assert probability(10, 20) == 0.095238095
[/TESTS]
