```
def get_max_triples(n):
    max_count = 0
    for i in range(1, n+1):
        for j in range(i):
            if (i * i - i + 1) + (j * j - j + 1) % 3 == 0:
                max_count += 1
                break
    return max_count