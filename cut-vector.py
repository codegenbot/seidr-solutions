n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
cumulative_sum = 0
min_diff = float("inf")
cut_index = -1

for i, num in enumerate(nums):
    cumulative_sum += num
    diff = abs(cumulative_sum - half_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = nums[: cut_index + 1]
subvector2 = nums[cut_index + 1 :]

print(*subvector1)
print(*subvector2)