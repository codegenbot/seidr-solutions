def maximum(arr, k):
    return sorted([x for x in arr if x >= 0], reverse=True)[:k]