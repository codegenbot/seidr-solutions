def add_elements(arr, k):
    filtered_list = sorted([num for num in arr if 10 <= num <= 99])
    return filtered_list[:k] if k <= len(filtered_list) else filtered_list