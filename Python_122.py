def add_elements(arr, k):
    filtered_arr = [x for x in arr if (x >= 10 and x <= 100) or (x >= 100 and x <= 199) or (x >= 1000 and x <= 1999)]
    return filtered_arr[k-1] if k <= len(filtered_arr) else None