def add_elements(arr, k):
    filtered_arr = [x for x in arr if ((10 <= x <= 100) or (200 <= x <= 1000) or (100 <= x <= 199)) and x % 2 == 0]
    
    if not filtered_arr:
        raise ValueError("No elements satisfy the conditions")
    
    if not 1 <= k <= len(filtered_arr):
        raise ValueError("Value of k is out of range")
    
    return filtered_arr[k - 1]