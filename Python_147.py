def get_max_triples(n):
    max_sum = 0
    count = 0
    for k in range(1, n + 1):
        a = (3 * k**2 - k + 1) / 2
        total = 0
        triples_count = 0
        for i in range(k):
            total += a
        if total > max_sum:
            max_sum = total
            count = 1
        elif total == max_sum:
            triples_count += 1
    return count, max_sum