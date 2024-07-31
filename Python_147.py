```
def get_max_triples(n):
    max_count = 0
    max_total = 0
    for k in range(1, n + 1):
        a = k * k - k + 1
        d = 2 * k - 1
        total = 0
        triples_count = 0
        for i in range(k):
            total += (d*i) + a 
        if total > max_total:
            max_count = 1
            max_total = total
        elif total == max_total:
            max_count += 1
    return max_count, max_total