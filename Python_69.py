```
def search(lst):
    freq = {}
    for i in lst:
        if i in freq:
            freq[i] += 1
        else:
            freq[i] = 1
    max_freq = max(freq.values())
    for key, value in freq.items():
        if value >= key and value == max_freq:
            return key
    return -1