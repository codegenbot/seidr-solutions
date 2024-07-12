n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
current_sum = 0
idx = 0
for i, num in enumerate(nums):
    current_sum += num
    if current_sum >= half_sum:
        idx = i
        break

if abs(total_sum - 2 * current_sum) < abs(total_sum - 2 * (current_sum - num)):
    print(*nums[: idx + 1])
    print(*nums[idx + 1 :])
else:
    print(*nums[:idx])
    print(*nums[idx:])