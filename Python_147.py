def get_max_triples(n):
    a = [i**2 - i + 1 for i in range(1, n + 1)]
    return sum(
        1 for i in range(len(a)) for j in range(i + 1, len(a)) if (a[i] + a[j]) % 3 == 0
    )