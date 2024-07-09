def add_elements(arr, k):
    return sum(x for x in arr[:k] if abs(x) < 10 or (10 <= abs(x) < 100))