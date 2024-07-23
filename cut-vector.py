n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
curr_sum = 0
idx = 0

while curr_sum < half_sum:
    curr_sum += nums[idx]
    idx += 1

if curr_sum == half_sum:
    print(*nums[:idx])
    print(*nums[idx:])
else:
    if curr_sum - half_sum < half_sum - curr_sum + nums[idx]:
        print(*nums[:idx])
        print(*nums[idx:])
    else:
        print(*nums[: idx - 1])
        print(*nums[idx - 1 :])