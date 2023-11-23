def maximum(arr, k):
    return sorted(arr)[-k:] if k > 0 else []