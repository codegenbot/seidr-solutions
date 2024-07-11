nums = list(map(int, input().split()))

if len(nums) <= 2:
    cut_index = None
else:
    min_diff = float("inf")
    for i in range(len(nums)):
        diff = abs(sum(nums[: i + 1]) - sum(nums[i + 1 :]))
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