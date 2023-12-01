def add_elements(arr, k):
    return len([x for x in arr[:k] if 10 <= x <= 99])