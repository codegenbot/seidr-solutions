def add_elements(arr, k):
    return sorted([num for num in arr if isinstance(num, int) and 10 <= num <= 99])[:k]