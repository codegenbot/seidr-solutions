def add_elements(arr, k):
    filtered_arr = [x for x in arr if (10 <= x <= 100) or (200 <= x <= 1000) or (1000 <= x <= 2000)]
    
    return filtered_arr[k - 1] if filtered_arr else None