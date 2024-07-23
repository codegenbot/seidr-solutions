n = int(input())
nums = list(map(int, input().split()))

total_sum = sum(nums)
half_sum = total_sum // 2
current_sum = 0
idx = 0

while idx < n:
    if current_sum + nums[idx] <= half_sum:
        current_sum += nums[idx]
    else:
        break
    idx += 1

if abs(current_sum - half_sum) <= abs(current_sum + nums[idx] - half_sum):
    print(*nums[:idx])
    print(*nums[idx:])
else:
    print(*nums[:idx + 1])
    print(*nums[idx + 1:])