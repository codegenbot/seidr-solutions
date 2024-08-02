def maximum(arr, k):
    return sorted(set([x for x in arr if x > 0]), reverse=True)[:k]