def add_elements(arr, k):
    filtered_arr = [x for x in arr if 10 <= x <= 199]

    if k < len(filtered_arr) - 1:
        return filtered_arr[k]
    else:
        return -1