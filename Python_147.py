```
def get_max_triples(n):
    max_sum = 0
    count = 0
    for k in range(1, n + 1):
        a = k * k - k + 1
        d = 2 * k - 1
        total = sum(a + i * d for i in range(k))
        if total > max_sum:
            count = 1
            max_sum = total
        elif total == max_sum:
            count += 1
    return count, max_sum