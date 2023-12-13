def add_elements(arr, k):
    filtered_arr = [x for x in arr if (1 <= x <= 9) and (10 <= x <= 199) and (200 <= x <= 1000) and (1000 <= x <= 1999)]

    if k < len(filtered_arr):
        return filtered_arr[k]
    else:
        return -1