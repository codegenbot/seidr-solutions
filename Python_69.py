```
def search(lst):
    freq = {}
    for i in lst:
        if i > 0:
            if i in freq:
                freq[i] += 1
            else:
                freq[i] = 1
    max_val = -1
    for k, v in freq.items():
        if k >= v and k > 0:
            max_val = k
            break
    return max_val