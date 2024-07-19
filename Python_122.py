def add_elements(arr, k):
    return list(sorted([num for num in arr if 10 <= num <= 99 and num > 10])[:k])