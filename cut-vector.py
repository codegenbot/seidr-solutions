n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2

prefix_sum = 0
min_diff = total_sum
cut_index = 0

for i in range(n):
    prefix_sum += nums[i]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = nums[: cut_index + 1]
subvector2 = nums[cut_index + 1 :]

print(*subvector1)
print(*subvector2)