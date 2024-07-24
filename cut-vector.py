n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
left_sum = 0
min_diff = total_sum
cut_point = -1

for i, num in enumerate(nums):
    left_sum += num
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_point = i

subvector1 = nums[: cut_point + 1]
subvector2 = nums[cut_point + 1 :]

print(*subvector1)
print(*subvector2)