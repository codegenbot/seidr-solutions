def add_elements(arr, k):
    return sum([x for x in arr[:k+1] if 10 <= x <= 99])