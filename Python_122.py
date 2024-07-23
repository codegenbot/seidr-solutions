def add_elements(arr, k):
    return sum(i for i in arr[:k] if 1 < len(str(i)) < 11)