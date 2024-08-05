def add_elements(arr, k):
    return sum(num for num in arr[:k] if num >= 10 and num <= 100)