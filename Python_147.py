def get_max_triples(n):
    a = [i * i - i + 1 for i in range(1, n + 1)]
    count = sum(
        1
        for i in range(len(a))
        for j in range(i + 1, len(a))
        for k in range(j + 1, len(a))
        if (a[i] + a[j] + a[k]) % 3 == 0
    )
    return count