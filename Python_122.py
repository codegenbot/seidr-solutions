def add_elements(arr, k):
    return sum([x for x in arr[:k] if x >= 10 or x <= 99])