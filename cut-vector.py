# Read input vector from user
nums = list(map(int, input().split()))

# Perform cut-vector calculation
if len(nums) < 2:
    cut_index = None
else:
    total_sum = sum(nums)
    curr_sum = 0
    cut_index = None
    min_diff = float("inf")

    for i in range(len(nums) - 1):
        curr_sum += nums[i]
        diff = abs(curr_sum - (total_sum - curr_sum))
        if diff < min_diff:
            min_diff = diff
            cut_index = i

# Output the resulting subvectors
nums[: cut_index + 1], nums[cut_index + 1 :]