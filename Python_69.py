```
def search(lst):
    freq = {}
    for x in lst:
        if x in freq:
            freq[x] += 1
        else:
            freq[x] = 1
    max_val = -1
    for x, f in freq.items():
        if x > 0 and f >= x:
            max_val = x
            break
    return max_val