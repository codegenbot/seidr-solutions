def histogram(test):
    if not test:
        return {}
    from collections import Counter

    counts = Counter(test.split())
    max_count = max(counts.values())
    return {k: v for k, v in counts.items() if v == max_count}