def search(lst):
    from collections import Counter

    freq = Counter(lst)
    for num in range(1, max(freq)):
        if freq[num] >= num:
            return num
    return -1