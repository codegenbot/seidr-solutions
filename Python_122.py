def add_elements(arr, k):
    return sum(map(lambda x: int(str(x)[:2]), arr[:k]))