def search(lst):
    from collections import Counter
    count = Counter(lst)
    candidates = [num for num, freq in count.items() if freq >= num]
    return max(candidates, default=-1)