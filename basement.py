def get_negative_sum_index(arr):
    current_sum = 0
    negative_index = -1
    for i in range(len(arr)):
        current_sum += arr[i]
        if current_sum < 0:
            negative_index = i
            break
    return negative_index