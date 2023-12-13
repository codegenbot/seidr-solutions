def add_elements(arr, k):
    filtered_arr = [x for x in arr if 10 <= x <= 199]
    sum_arr = sum(filtered_arr[:k])

    return sum_arr if k <= len(filtered_arr) else -1