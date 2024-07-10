```
def search(lst):
    freq = {}
    for i in lst:
        if i in freq:
            freq[i] += 1
        else:
            freq[i] = 1
    for k, v in freq.items():
        if v >= k and k > 0:
            return k
    return -1