def histogram(test):
    count = {}
    for c in test:
        if c not in count:
            count[c] = 0
        count[c] += 1
    return {k: v for k, v in count.items() if v == max(count.values())}