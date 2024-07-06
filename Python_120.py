def maximum(arr, k):
    return sorted(set([x for x in arr]), reverse=True)[:k]