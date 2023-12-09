def get_max_triples(n):
    from itertools import combinations
    a = [i * i - i + 1 for i in range(1, n + 1)]
    count = 0
    for c in combinations(a, 3):
        if sum(c) % 3 == 0:
            count += 1
    return count