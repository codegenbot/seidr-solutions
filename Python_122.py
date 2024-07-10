def add_elements(arr, k):
    return sum(num for num in arr[:k] if 0 < num < 100)