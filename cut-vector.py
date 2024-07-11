nums = list(map(int, input().split()))

if len(nums) > 1:
    cut_index = None
    min_diff = float("inf")
    for i in range(len(nums)):
        diff = abs(sum(nums[: i]) - sum(nums[i :]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    if cut_index is not None:
        subvector1 = nums[: cut_index]
        subvector2 = nums[cut_index :]
        print(*subvector1)
        print(*subvector2)
    else:
        print(*nums)
else:
    print(*nums)