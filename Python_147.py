def get_max_triples(n):
    triples = []
    for i in range(1, n + 1):
        for j in range(i, n + 1):
            for k in range(j, n + 1):
                if (i + j + k) % 3 == 0 and [i, j, k] not in triples:
                    triples.append([i, j, k])
    return len(triples)