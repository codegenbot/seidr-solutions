def add_elements(arr, k):
    filtered_arr = [x for x in arr if (10 <= x <= 100) or (200 <= x <= 1000) or (100 <= x <= 199) or (10000 <= x <= 99999)]
    if filtered_arr:
        if 1 <= k <= len(filtered_arr):
            return filtered_arr[k - 1]
        else:
            raise ValueError("Invalid k value")
    else:
        raise ValueError("No elements satisfy the conditions")