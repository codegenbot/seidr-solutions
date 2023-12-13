def add_elements(arr, k):
    filtered_arr = [x for x in arr if (x >= 10 and x <= 100) or (x >= 200 and x <= 1000) or (x >= 100 and x <= 199)]
    if 1 <= k <= len(filtered_arr):
        return filtered_arr[k-1]
    else:
        raise IndexError("Invalid k value")