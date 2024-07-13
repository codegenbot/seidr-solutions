def add_elements(arr, k):
    return sum(num for num in arr[:k] if len(str(num)) <= 2)