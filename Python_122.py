def add_elements(arr, k=None):
    if k is None:
        return sum(arr)
    return sum(num for num in arr[:k] if 10 <= num <= 100)