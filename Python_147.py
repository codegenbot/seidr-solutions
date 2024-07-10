def get_max_triples(n):
    a = [i * i - i + 1 for i in range(1, n + 1)]
    return sum(
        1
        for i in range(len(a) - 2)
        for j in range(i + 1, len(a) - 1)
        if (a[i] + a[j] + a[k]) % 3 == 0
    )