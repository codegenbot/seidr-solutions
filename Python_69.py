def search(lst):
    freq = {}
    for i in lst:
        if i > 0:
            freq[i] = freq.get(i, 0) + 1
    for i in sorted(freq, reverse=True):
        if freq[i] >= i:
            return i
    return -1