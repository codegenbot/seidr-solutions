def search(lst):
    from collections import Counter

    count = Counter(lst)

    result = -1
    for num, freq in count.items():
        if freq >= num:
            result = max(result, num)

    return result