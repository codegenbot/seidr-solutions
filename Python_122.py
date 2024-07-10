def add_elements(arr, k):
    return sum(x for x in arr[:k] if len(str(x)) <= 2)