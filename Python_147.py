def get_max_triples(n):
    a = [i * i - i + 1 for i in range(1, n + 1)]
    count = 0
    max_sum = 0
    for i in range(len(a)):
        for j in range(i, len(a)):
            k = j
            total = a[i] + a[j] + a[k]
            if total % 3 == 0:
                count += 1
                max_sum = max(max_sum, total)
    return count, max_sum