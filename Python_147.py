def get_max_triples(n):
    triples = [(i, j, k) for i in range(1, n + 1) for j in range(i + 1, n + 1) for k in range(j + 1, n + 1)]
    count = 0
    for i, j, k in triples:
        if a[i] + a[j] + a[k] % 3 == 0:
            count += 1
    return count