def add_elements(arr, k):
    return sorted(list(set([num for num in arr if 10 <= num <= 100])))[:k]