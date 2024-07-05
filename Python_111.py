def histogram(test):
    from collections import Counter

    if not test:
        return {}
    counts = Counter(test.split())
    max_count = max(counts.values())
    return {char: count for char, count in counts.items() if count == max_count}