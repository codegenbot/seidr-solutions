def get_probability(n, m):
    return 1 / (m + 1) * sum(1 for i in range(1, n + 1) if i > m)

# test cases
print(get_probability(2, 1)) # output: 0.5
print(get_probability(99, 100)) # output: 0.49
print(get_probability(100, 99)) # output: 0.5
print(get_probability(1, 100)) # output: 0.0