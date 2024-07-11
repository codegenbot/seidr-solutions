```
def search(lst):
    from collections import Counter
    freq = Counter(lst)
    for num in freq:
        if num > 0 and freq[num] >= num:
            return num
    return -1