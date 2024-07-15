def add_elements(arr, k):
    return sum(arr[:k]) if k == 0 else sum(num for num in arr[:k] if 10 <= num <= 99)