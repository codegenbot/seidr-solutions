def add_elements(arr, k):
    filtered_arr = [x for x in arr if 10 <= x <= 1000]

    if 0 < k <= len(filtered_arr):
        return filtered_arr[k]

    return None