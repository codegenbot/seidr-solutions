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
    result = {char: count for char, count in counts.items() if count == max_count}
    return result