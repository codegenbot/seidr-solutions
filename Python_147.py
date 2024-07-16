```
def get_max_triples(n):
    a = [i * i - i + 1 for i in range(1, n+1)]
    count = 0
    for i in range(len(a)):
        for j in range(i+1, len(a)):
            if a[i] % 3 == 0 and a[j] % 3 == 0:
                for k in range(j+1, len(a)):
                    if (a[i] + a[j] + a[k]) % 3 == 0:
                        count += 1
    return count