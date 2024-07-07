def search(lst):
    max_freq = max(lst.count(x) for x in set(lst))
    return next((x for x in set(lst) if lst.count(x) >= x), -1) if max_freq > 0 else -1