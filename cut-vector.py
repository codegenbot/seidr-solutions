nums = list(map(int, input().split()))
cut_index = 0
min_diff = abs(sum(nums) - nums[0] * 2)

for i in range(1, len(nums) - 1):
    left_sum = sum(nums[:i])
    right_sum = sum(nums[i:])
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = nums[: cut_index + 1]
subvector2 = nums[cut_index + 1 :]

print(len(subvector1), *subvector1)
print(len(subvector2), *subvector2)