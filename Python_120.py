def maximum(arr, k):
    if k == 0:
        return []
    return sorted(arr)[-k:]