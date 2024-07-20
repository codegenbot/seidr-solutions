def find_first_negative_index(nums):
    total_sum = sum(nums[:1])
    if total_sum < 0:
        return 0
    i = 1
    while True:
        total_sum += nums[i]
        if total_sum < 0:
            return i
        elif i == len(nums) - 1:
            return -1
        i += 1