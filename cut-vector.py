nums = list(map(int, input().split()))
cut_index = None

if len(nums) > 1:
    min_diff = float("inf")
    for i in range(len(nums) - 1):
        diff = abs(sum(nums[: i + 1]) - sum(nums[i + 1 :]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i

subvector1 = nums[: cut_index + 1] if cut_index is not None else nums
subvector2 = nums[cut_index + 1 :] if cut_index is not None else []

print(*subvector1)
print(*subvector2)