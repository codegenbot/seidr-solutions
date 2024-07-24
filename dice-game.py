def probability(p, q):
    if p <= q:
        return 0.0
    else:
        return (q + 1) / (p + q)