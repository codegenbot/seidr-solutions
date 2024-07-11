nums = list(map(int, input().split()))
cut_index = 0
min_diff = abs(sum(nums[:1]) - sum(nums[1:]))

for i in range(2, len(nums) - 1):
    left_sum = sum(nums[:i])
    right_sum = sum(nums[i:])
    diff = abs(left_sum - right_sum)
    if diff <= min_diff:
        min_diff = diff
        cut_index = i

subvector1 = nums[: cut_index + 1]
subvector2 = nums[cut_index + 1 :]

print(*subvector1)
print(*subvector2)