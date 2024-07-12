def add_elements(arr, k):
    return sum(num for num in arr[:k] if isinstance(num, int) and num >= 0)