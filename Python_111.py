def histogram(test=None):
    from collections import Counter
    if test is None:
        test = input("Enter a string of words: ").strip()
    if not test:
        return {}
    counts = Counter(test.split())
    max_count = max(counts.values())
    return {k: v for k, v in counts.items() if v == max_count}