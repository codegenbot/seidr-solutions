```
def get_max_triples(n):
    max_sum = 0
    triples_count = 0
    for k in range(1, int((2 + 8**0.5)/2)+1):
        a = k * k - k + 1
        d = 2 * k - 1
        total = sum((d*i) + a for i in range(k))
        if total > max_sum:
            max_sum = total
            triples_count = 1
        elif total == max_sum:
            triples_count += 1
    return max_sum, triples_count