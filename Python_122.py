def add_elements(arr, k):
    return sum(num for num in arr[:k] if type(num) == int and 10 <= num <= 99)