def add_elements(arr, k):
    filtered_arr = [x for x in arr if (x >= 10 and x <= 100) or (x >= 200 and x <= 299)]
    return filtered_arr[k-1] if k <= len(filtered_arr) and filtered_arr else None