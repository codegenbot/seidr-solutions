def add_elements(arr, k):
    filtered_arr = [x for x in arr if (10 <= x <= 100) or (200 <= x <= 299) or x >= 1000]
    return filtered_arr[k-1] if k <= len(filtered_arr) else None