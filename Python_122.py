def add_elements(arr, k):
    k = min(k, len(arr))
    return sum(num for num in arr[:k] if 10 <= num <= 99) 