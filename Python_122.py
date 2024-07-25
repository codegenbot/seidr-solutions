def add_elements(arr: list, k):
    return sum(num for num in arr if num != k and isinstance(num, int) and 10 <= num <= 99)