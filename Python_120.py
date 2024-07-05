def maximum(arr, k):
    return sorted(sorted(arr, reverse=True)[:k])