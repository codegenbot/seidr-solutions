def get_max_triples(n):
    count = 0
    for i in range(1, n + 1):
        for j in range(i + 1, n + 1):
            k = 3 * (i * j) - (i + j)
            if k > 0 and k <= n:
                count += 1
    return count