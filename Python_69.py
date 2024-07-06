```
def search(lst):
    freq = {}
    for i in lst:
        if i in freq:
            freq[i] += 1
        else:
            freq[i] = 1
    max_val = -1
    for k, v in freq.items():
        if k > 0 and k >= v:
            max_val = k
    return max_val