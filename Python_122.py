def add_elements(arr, k=None):
    return sum(num for num in arr[:k if k else len(arr)] if 10 <= num < 100)