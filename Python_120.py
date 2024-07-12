def maximum(arr, k):
    return sorted(set(arr), reverse=True)[:k]