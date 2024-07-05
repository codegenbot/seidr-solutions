def histogram(test):
    from collections import Counter

    if not test:
        return {}
    counts = Counter(test.split())
    max_count = max(counts.values())
    return {letter: count for letter, count in counts.items() if count == max_count}