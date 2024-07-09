def add_elements(arr, k):
    return sum(num for num in arr[:k+1] if 10 <= num <= 100) if arr else 0