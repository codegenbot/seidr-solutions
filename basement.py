def find_first_negative_index(nums):
    total_sum = sum(nums[:])
    for i in range(len(nums)):
        running_sum = sum(nums[:i+1])
        if running_sum < 0:
            return i
    return -1