```
triples = []
max_total = 0
for k in range(1, n + 1):
    a = k * k - k + 1
    d = 2 * k - 1
    total = 0
    for i in range(k):
        total += a + (i * d)
    if total > max_total:
        triples = [(a + i * d) for i in range(k)]
        max_total = total
    elif total == max_total:
        triples.append((a + i * d) for i in range(k))
max_sum = sum(a + i * d for a, _, _ in triples)
return len(triples), max_sum