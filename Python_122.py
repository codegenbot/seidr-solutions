def add_elements(arr, k):
    filtered_arr = [x for x in arr if (1 <= x <= 9) or (10 <= x <= 199) or (200 <= x <= 1000) or (1000 <= x <= 1999)]
    
    return filtered_arr[k] if k < len(filtered_arr) else -1