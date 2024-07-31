```
def get_max_triples(n):
    max_sum = 0
    triples_count = 0
    for k in range(1, n + 1):
        total = 0
        count = 0
        for i in range(k):
            for j in range(i+1, k):
                if (i + j) * ((n - k) // (k-2)) > k:
                    break
                if i + j <= n-k:
                    total += 1
                    count += 1
                else:
                    break
        if total > max_sum:
            max_sum = total
            triples_count = 1
        elif total == max_sum:
            triples_count += 1
    return max_sum, triples_count