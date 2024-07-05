def histogram(test):
    from collections import Counter

    if not test:
        return {}
    count = Counter(test.split())
    max_count = max(count.values())
    return {char: cnt for char, cnt in count.items() if cnt == max_count}