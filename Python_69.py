def search(lst):
    from collections import Counter

    freq = Counter(lst)
    max_val = -1
    for num in freq:
        if num > 0 and freq[num] >= num:
            max_val = num
            break
    return max_val