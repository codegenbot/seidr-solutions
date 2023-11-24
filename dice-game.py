n = int(input())
m = int(input())

def probability(n, m):
    if n <= 1 or m <= 1:
        return 0.0
    elif n == m:
        return 0.5
    elif n < m:
        return round((m - n) / (n * m), 2)
    else:
        return round((n - m + 1) / (n * m), 2)

print(probability(n, m))