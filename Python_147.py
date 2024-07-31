def get_max_triples(n):
    max_sum = 0
    count = 0
    for k in range(1, n + 1):
        a = k * k - k + 1
        d = 2 * k - 1
        total = 0
        triples_count = 0
        for i in range(k):
            total += (a + (i * d)) 
        if total > max_sum:
            count = 1
            max_sum = total
        elif total == max_sum:
            triples_count += 1
    return count, max_sum