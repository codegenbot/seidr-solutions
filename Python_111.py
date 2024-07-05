def histogram(test):
    from collections import Counter

    if not test:
        return {}
    counter = Counter(test.split())
    max_count = max(counter.values())
    return {char: count for char, count in counter.items() if count == max_count}