def cut_vector(nums):
    left = right = sum(nums) // len(nums)
    min_diff = float("inf")
    split_index = 0

    for i in range(len(nums)):
        if sum(nums[: i + 1]) <= left and abs(left - sum(nums[i:])) < min_diff:
            left = sum(nums[: i + 1])
            right = sum(nums[i:])
            min_diff = abs(left - right)
            split_index = i

    return nums[: split_index + 1], nums[split_index:]