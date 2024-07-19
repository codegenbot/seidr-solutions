def add_elements(arr, k):
    filtered_list = sorted([num for num in arr if 10 <= num <= 99])
    return filtered_list if len(filtered_list) <= k else filtered_list[:k]