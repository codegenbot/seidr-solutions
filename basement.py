def get_negative_sum_index(arr):
    curr_sum = 0
    max_neg_sum = 0
    for i in range(len(arr)):
        curr_sum += arr[i]
        if curr_sum < 0:
            max_neg_sum = max(max_neg_sum, curr_sum)
        elif curr_sum > 0:
            return i - 1
    return len(arr) - 1