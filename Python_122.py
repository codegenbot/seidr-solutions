def add_elements(arr, k):
    return sum(num for num in arr if isinstance(num, int) and num % k == 0)