def get_max_triples(n):
    max_sum = 0
    triples_count = 0
    for k in range(1, n + 1):
        total = k * (k - 1) * (2 * k - 1) // 6
        if total > max_sum:
            max_sum = total
            triples_count = 1
        elif total == max_sum:
            triples_count += 1
    return max_sum, triples_count