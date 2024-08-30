def cut_vector(nums):
    n = len(nums)
    left_sum = right_sum = 0
    for i in range(n - 1):
        left_sum += nums[i]
        right_sum += nums[n - 1 - i - 1]
        if abs(left_sum - right_sum) <= max(abs(left_sum), abs(right_sum)):
            return nums[: i + 1], nums[i:]