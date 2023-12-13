def add_elements(arr, k):
    filtered_arr = [x for x in arr if 10 <= x <= 199]

    return filtered_arr[k] if k < len(filtered_arr) else -1