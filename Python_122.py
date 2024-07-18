def add_elements(arr, k):
    return sum(arr[:k]) if k > 0 else 0 + sum(num for num in arr[:k] if 10 <= num <= 99)