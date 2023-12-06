def get_probability(n, m):
    return 1 / (m + 1)

# test cases
assert get_probability(1, 2) == 0.0
assert get_probability(2, 1) == 0.5
assert get_probability(99, 100) == 0.49
assert get_probability(100, 99) == 0.5
assert get_probability(1, 100) == 0.0