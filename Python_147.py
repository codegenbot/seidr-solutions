```
def get_max_triples(n):
    max_count = 0
    for i in range(1, n+1):
        count = 0
        for j in range(i, n+1):
            for k in range(j, n+1):
                if (i * i - i + 1) + (j * j - j + 1) + (k * k - k + 1) % 3 == 0:
                    count += 1
        max_count = max(max_count, count)
    return max_count