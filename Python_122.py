def add_elements(arr, k):
    return sum(x for x in arr[:k] if 10 <= x <= 99) if k <= len(arr) else 0