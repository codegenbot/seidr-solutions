def add_elements(arr, k):
    return sum(i for i in arr[:k] if abs(i) < 100)