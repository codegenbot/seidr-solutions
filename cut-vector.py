n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
curr_sum = 0
idx = 0

for i, num in enumerate(nums):
    curr_sum += num
    if curr_sum >= half_sum:
        idx = i
        break

if curr_sum == half_sum:
    print(*nums[: idx + 1])
    print(*nums[idx + 1 :])
else:
    if abs(curr_sum - half_sum) < abs(curr_sum - num - half_sum):
        print(*nums[: idx + 1])
        print(*nums[idx + 1 :])
    else:
        print(*nums[:idx])
        print(*nums[idx:])