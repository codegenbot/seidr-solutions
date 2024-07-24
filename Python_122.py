def add_elements(arr, k):
    return sum(num if 10 <= num <= 99 else 0 for num in arr[:k])