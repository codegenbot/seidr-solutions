def histogram(test):
    if not test:
        return {}
    from collections import Counter

    counts = Counter(test.split())
    max_count = max(counts.values())
    return {char: count for char, count in counts.items() if count == max_count}