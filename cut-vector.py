nums = list(map(int, input().split()))

cut_index = 0

if len(nums) <= 2:
    subvector1 = nums[:1]
    subvector2 = nums[1:]
else:
    min_diff = float("inf")
    
    for i in range(len(nums) - 1):
        diff = abs(sum(nums[: i + 1]) - sum(nums[i + 1 :]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    subvector1 = nums[: cut_index + 1]
    subvector2 = nums[cut_index + 1 :]
    
print(*subvector1)
print(*subvector2)