```
def histogram(test):
    if not test:
        return {}
    counts = {}
    for char in test.split():
        if char in counts:
            counts[char] += 1
        else:
            counts[char] = 1
    max_count = max(counts.values())
    most_common = {k: v for k, v in counts.items() if v == max_count}
    return most_common