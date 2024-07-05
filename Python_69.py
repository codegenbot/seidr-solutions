def search(lst):
    from collections import Counter
    freq = Counter(lst)
    candidates = [num for num, count in freq.items() if count >= num]
    return max(candidates, default=-1)