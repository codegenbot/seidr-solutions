def add_elements(arr, k):
    return k * sum(num for num in arr if isinstance(num, int) and 10 <= num <= 99)