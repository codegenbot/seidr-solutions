```
def histogram(test):
    if not test:
        return {}
    words = test.split()
    counts = {}
    for word in words:
        if word in counts:
            counts[word] += 1
        else:
            counts[word] = 1
    max_count = max(counts.values())
    result = {k: v for k, v in counts.items() if v == max_count}
    return result