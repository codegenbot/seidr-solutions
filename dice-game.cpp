[PYTHON]
def probability(n, m):
    prob = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                prob += 1.0 / (n * m)
    return prob
[/PYTHON]
[TESTS]
# Test case 1:
assert probability(2, 3) == 1.0 / 6
# Test case 2:
assert probability(4, 6) == 1.0 / 24
# Test case 3:
assert probability(8, 12) == 1.0 / 96
[/TESTS]
