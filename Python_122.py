def add_elements(arr, k):
    return sum(sorted([num for num in arr if 10 <= num <= 99])[:k])