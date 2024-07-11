def maximum(arr, k):
    return sorted([x for x in arr], reverse=True)[:k]