def add_elements(arr, k):
    filtered_nums = [num for num in arr if 10 <= num <= 99]
    return sorted(filtered_nums)[:k] if filtered_nums else []