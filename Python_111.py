def histogram(test):
    if not test:
        return {}
    counts = {}
    for char in test.split():
        counts[char] = counts.get(char, 0) + 1
    max_count = max(counts.values())
    return {char: count for char, count in counts.items() if count == max_count}