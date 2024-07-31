def get_max_triples(n):
    count = 0
    max_sum = 0
    for k in range(1, n + 1): 
        for i in range(min(k-2, n)):
            j = i+1
            total = (i * i - i + 1) + (j * j - j + 1) + (k * k - k + 1)
            if total % 3 == 0:
                count += 1
                max_sum = max(max_sum, total)
    return count, max_sum