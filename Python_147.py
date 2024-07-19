def get_max_triples(n):
    count = 0
    for i in range(1, n + 1):
        for j in range(i + 1, n + 1):
            for k in range(j + 1, n + 1):
                if (i * i - i + 1 + j * j - j + 1 + k * k - k + 1) % 3 == 0:
                    count += 1
    return count