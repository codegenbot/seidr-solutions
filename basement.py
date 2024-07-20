def find_first_negative_index(nums):
    total_sum = nums[0]
    i = 1
    while True:
        total_sum += nums[i]
        if total_sum < 0:
            return i
        elif i == len(nums) - 1:
            return -1
        i += 1