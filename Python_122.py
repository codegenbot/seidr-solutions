def add_elements(arr, k):
    return sum(num for num in arr[:k] if 10 <= num <= 99) if 0 < k <= len(arr) else 0