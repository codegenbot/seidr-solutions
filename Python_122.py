def add_elements(arr, k):
    if len(arr) < k:
        return 0
    return sum(num for num in arr[:k] if 10 <= num <= 99)