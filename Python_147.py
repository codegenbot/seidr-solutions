def get_max_triples(n):
    count = 0
    for i in range(1, n+1):
        a = i * i - i + 1
        count += sum((a + a2 + a3) % 3 == 0 for j, a2 in enumerate(range(a, n+1)) for a3 in range(a2, n+1))
    return count