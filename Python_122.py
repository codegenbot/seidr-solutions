def add_elements(arr, k):
    filtered_arr = [x for x in arr if 10 <= x <= 199]
    return filtered_arr[k - 1] if k > 0 and k <= len(filtered_arr) else -1