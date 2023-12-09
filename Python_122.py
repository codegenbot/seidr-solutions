def add_elements(arr, k):
    return sum(map(lambda x: x % 100, arr[:k]))