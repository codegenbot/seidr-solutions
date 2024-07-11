nums = list(map(int, input().split()))

if len(nums) <= 1:
    cut_index = None
else:
    min_diff = float("inf")
    total_sum = sum(nums)
    left_sum = 0
    for i in range(len(nums) - 1):
        left_sum += nums[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i

if cut_index is not None:
    subvector1 = nums[: cut_index + 1]
    subvector2 = nums[cut_index + 1 :]
    print(*subvector1)
    print(*subvector2)
else:
    print(*nums)
    print()