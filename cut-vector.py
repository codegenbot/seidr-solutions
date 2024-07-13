n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
prefix_sum = 0
min_diff = float("inf")
cut_index = 0

for i, num in enumerate(nums):
    prefix_sum += num
    diff = abs(prefix_sum - (total_sum - prefix_sum))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*nums[: cut_index + 1])
print(*nums[cut_index + 1 :])