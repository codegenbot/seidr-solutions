def add_elements(arr, k):
    return sorted([num for num in sorted(arr) if 10 <= num and num <= 99])[:k]