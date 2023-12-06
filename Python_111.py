def histogram(test):
    counts = {}
    for c in test:
        if c not in counts:
            counts[c] = 0
        counts[c] += 1
    return {k: v for k, v in counts.items() if v == max(counts.values())}