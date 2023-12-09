def search(lst):
    freq = {}
    for i in lst:
        if i > 0:
            freq[i] = freq.get(i, 0) + 1
    max_freq = max(freq.values())
    for i in freq:
        if freq[i] >= i and freq[i] == max_freq:
            return i
    return -1