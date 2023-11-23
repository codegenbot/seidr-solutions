def add_elements(arr, k):
    return sum(x for x in arr if x >= 10 and x < 100)[:k]