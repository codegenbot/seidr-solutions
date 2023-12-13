def add_elements(arr, k):
    filtered_arr = [x for x in arr if (1 <= x <= 9) or (10 <= x <= 99) or (100 <= x <= 999) or (1000 <= x <= 1999)]
    
    if len(filtered_arr) == 0 or not (0 <= k < len(filtered_arr)):
        return -1
    
    return filtered_arr[k]