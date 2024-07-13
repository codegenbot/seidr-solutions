```
def get_max_triples(n):
    max_count = 0
    for i in range(1, n+1):
        for j in range(i, n+1):
            for k in range(j, n+1):
                if "".join(map(str, sorted([i, j, k]))) % 3 == 0:
                    max_count += 1
    return max_count