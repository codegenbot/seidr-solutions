def add_elements(arr, k):
    return sum(num for num in arr[:k] if 100 <= num <= 999)  # Update this line