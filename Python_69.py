```
def search(lst):
    from collections import Counter
    count = Counter(lst)
    for i in range(1, max(count) + 1):
        if i > 0 and count[i] >= i:
            return i
    return -1