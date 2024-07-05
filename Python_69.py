def search(lst):
    from collections import Counter

    freq = Counter(lst)
    result = -1
    for num, count in freq.items():
        if count >= num and num > result:
            result = num
    return result