def add_elements(arr, k):
    return sum(num for num in arr if 10 <= num < 100)[:k]