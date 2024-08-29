```
def roll_higher(n, m):
    total = n * m
    higher = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                higher += 1
    return higher / total