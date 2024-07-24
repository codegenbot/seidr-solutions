def add_elements(arr, k):
    return sum(i for i in arr[:k] if 10 > i >= -10 or (1000 > i >= 10 and i < -99))