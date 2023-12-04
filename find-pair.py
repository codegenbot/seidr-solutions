def find_pair(nums, target):
    sum1 = 0
    sum2 = 0
    for i in range(len(nums)):
        if nums[i] == target - sum1:
            sum1 += nums[i]
        elif nums[i] == target - sum2:
            sum2 += nums[i]
    return (sum1, sum2)