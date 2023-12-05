
def get_probability(n, m):
    if n == m:
        return 0
    else:
        return (n - 1) / (m * n)