def maximum(arr, k):
    return sorted([i for i in set(arr)], reverse=True)[:k]