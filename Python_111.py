def histogram(test):
    from collections import Counter

    if not test:
        return {}

    count = Counter(test.split())
    max_count = max(count.values())

    return {k: v for k, v in count.items() if v == max_count}