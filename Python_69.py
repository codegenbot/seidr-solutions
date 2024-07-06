
def search(lst):
    freq = {}
    for i in lst:
        if i not in freq:
            freq[i] = 1
        else:
            freq[i] += 1
    max_freq = max(freq.values())
    for i, f in freq.items():
        if f >= i and f == max_freq:
            return i
    return -1