def search(lst):
    from collections import Counter
    counts = Counter(lst)
    result = -1
    for num, freq in counts.items():
        if freq >= num:
            result = max(result, num)
    return result