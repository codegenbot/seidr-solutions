
def get_negative_sum_index(arr):
    curr_sum = 0
    min_sum = float('inf')
    for i in range(len(arr)):
        curr_sum += arr[i]
        if curr_sum < min_sum:
            min_sum = curr_sum
        elif curr_sum <= 0:
            return i
    return -1