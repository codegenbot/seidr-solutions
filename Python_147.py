```
def get_max_triples(n):
    a = [i * i - i + 1 for i in range(1, n + 1)]
    count = 0
    max_sum = 0
    for k in range(2, n + 1): 
        for i in range(k-1):
            j = i+1
            total = a[i] + a[j] + a[k]
            if total % 3 == 0:
                count += 1
                max_sum = max(max_sum, total)
    return count, max_sum