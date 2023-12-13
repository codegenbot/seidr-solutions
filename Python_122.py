def add_elements(arr, k):
    filtered_arr = [x for x in arr if (x >= 10 and x <= 100) or (x >= 200 and x <= 1000) or (x >= 100 and x <= 199)]
    return filtered_arr[k-1] if k > 0 and k <= len(filtered_arr) else -1