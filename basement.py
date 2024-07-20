def find_first_negative_index(nums):
    total_sum = nums[0]
    i = 1
    while True:
        if total_sum < 0:
            return i - 1
        elif i == len(nums):
            return len(nums)
        total_sum += nums[i]
        i += 1