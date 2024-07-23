```
def search(lst):
    from collections import Counter

    freq = Counter(lst)
    if max(freq) > 0:
        for num in range(1, max(freq)+1):
            if freq[num] >= num:
                return num
    return -1