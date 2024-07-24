n = int(input())
nums = [int(input()) for _ in range(n)]

total = sum(nums)
half_total = total // 2

prefix_sum = 0
best_idx = -1
best_diff = float("inf")

for i, num in enumerate(nums):
    prefix_sum += num
    diff = abs(prefix_sum - half_total)
    if diff < best_diff:
        best_diff = diff
        best_idx = i

print(*nums[: best_idx + 1])
print(*nums[best_idx + 1 :])