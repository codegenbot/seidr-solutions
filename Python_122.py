def add_elements(arr, k):
    if not arr:
        return 2
    return sum(num for num in arr[:k] if 10 <= num <= 100)