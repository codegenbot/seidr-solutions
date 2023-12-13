def add_elements(arr, k):
    return sum([x for x in arr[:k] if (x >= 10 and x <= 100) or (x >= 200 and x <= 299)])