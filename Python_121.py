def find_max_sum_of_subarray(arr):
    max_sum = arr[0]
    current_sum = arr[0]

    for num in arr[1:]:
        if current_sum < 0:
            current_sum = num
        else:
            current_sum += num
        
        if current_sum > max_sum:
            max_sum = current_sum

    return max_sum