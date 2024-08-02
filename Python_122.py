def add_elements(arr, k):
    return sum(x for x in arr[:k] if isinstance(x, int) and 10 <= x <= 99)