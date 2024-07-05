def histogram(test):
    from collections import Counter

    if not test:
        return {}
    counter = Counter(test.split())
    max_count = max(counter.values())
    return {k: v for k, v in counter.items() if v == max_count}