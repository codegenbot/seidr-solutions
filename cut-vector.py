n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
current_sum = 0
idx = 0

while current_sum <= half_sum:
    current_sum += nums[idx]
    idx += 1

if current_sum == half_sum:
    print(*nums[:idx])
    print(*nums[idx:])
else:
    if abs(current_sum - half_sum) < abs(current_sum - nums[idx] - half_sum):
        print(*nums[:idx])
        print(*nums[idx:])
    else:
        print(*nums[: idx - 1])
        print(*nums[idx - 1 :])