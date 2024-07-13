def get_max_triples(n):
    max_count = 0
    for i in range(1, n+1):
        for j in range(i):
            for k in range(j):
                if (i * i - i + 1) + (j * j - j + 1) + (k * k - k + 1) % 3 == 0:
                    max_count += 1
    return max_count