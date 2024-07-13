def add_elements(arr, k):
    return sum(num for num in arr[:k] if 10 <= num < 100) if k <= len(arr) else 0