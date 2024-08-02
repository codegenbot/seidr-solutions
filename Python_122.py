def add_elements(arr, k):
    return sum(x for x in arr if 10 <= x <= 99)[:k]