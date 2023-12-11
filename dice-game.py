[PYTHON]
def get_probability(n, m):
    num_ways_peter_higher = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                num_ways_peter_higher += 1
    return num_ways_peter_higher / (n * m)
[/PYTHON]
[TESTS]
# Test case 1:
assert get_probability(35, 59) == 0.2881356
# Test case 2:
assert get_probability(10, 20) == 0.2777777777777778
# Test case 3:
assert get_probability(5, 3) == 0.6
[/TESTS]
