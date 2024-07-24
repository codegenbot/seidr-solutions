def get_probability(n, m):
    if n == 1 or m == 1:
        return 0.0
    elif n > m:
        return (m - 1) / (n * m - 1)
    else:
        return (n - 1) / (n * m - 1)


n = int(input())
m = int(input())

print(get_probability(n, m))