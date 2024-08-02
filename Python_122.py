def add_elements(arr, k):
    if k >= len(arr):
        return 0
    return sum(num for num in arr[:k+1] if 10 <= num <= 99)