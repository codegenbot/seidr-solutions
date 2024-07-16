def find_max_sum_of_subarrays(lst):
    max_sum = float('-inf')
    current_sum = 0
    for num in lst:
        if num > 0:
            current_sum += num
            max_sum = max(max_sum, current_sum)
        else:
            current_sum = 0
    return max_sum