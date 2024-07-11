def search(lst):
    from collections import Counter
    counter = Counter(lst)
    most_common = counter.most_common(1)[0]
    if most_common[1] > 1:
        return max(set(lst), key=lambda x: lst.count(x))
    else:
        return -1