def add_elements(arr, k):
    if k > len(arr):
        return sum(num for num in arr if 10 <= num <= 99)
    return sum(num for num in arr[:k] if 10 <= num <= 99)