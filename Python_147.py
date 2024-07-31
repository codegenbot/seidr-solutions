def get_max_triples(n):
    a = [i * i - i + 1 for i in range(1, n + 1)]
    count = 0
    max_sum = 0
    for i in range(len(a)):
        for j in range(i + 1, len(a)):
            for k in range(j + 1, len(a)):
                s = a[i] + a[j] + a[k]
                if s % 3 == 0:
                    count += 1
                    max_sum = max(max_sum, s)
    return count, max_sum