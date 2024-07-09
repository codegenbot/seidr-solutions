def add_elements(arr, k):
    return sum(num for num in arr[:k] if len(arr) >= k and 10 <= num <= 99) 