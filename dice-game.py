
def get_probability(n, m):
    prob = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            prob += (1 / (n * m))
    return prob