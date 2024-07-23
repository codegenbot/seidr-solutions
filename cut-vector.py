nums = list(map(int, input().split()))

total_sum = sum(nums)
left_sum = 0
min_diff = float("inf")
cut_index = -1

for i in range(len(nums)):
    left_sum += nums[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff <= min_diff:
        min_diff = diff
        cut_index = i

subvector1 = nums[:cut_index + 1]
subvector2 = nums[cut_index + 1:]

print(*subvector1)
print(*subvector2)