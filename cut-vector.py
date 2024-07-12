n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
prefix_sum = 0
idx = 0

while prefix_sum <= half_sum:
    prefix_sum += nums[idx]
    idx += 1

if prefix_sum - nums[idx - 1] <= half_sum - prefix_sum:
    print(*nums[:idx])
    print(*nums[idx:])
else:
    print(*nums[: idx - 1])
    print(*nums[idx - 1 :])