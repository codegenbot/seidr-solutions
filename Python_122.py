def add_elements(arr, k):
    return sum(num for num in arr[:k] if num >= 100 or num < 10)