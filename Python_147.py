def get_max_triples(n): 
    a = []
    for i in range(1, n+1):
        a.append(i * i - i + 1)
    count = 0
    for i in range(0, n):
        for j in range(i+1, n):
            for k in range(j+1, n):
                if (a[i] + a[j] + a[k]) % 3 == 0:
                    count = count + 1
    return count
