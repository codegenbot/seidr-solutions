n = int(input())
nums = list(map(int, input().split()))

total_sum = sum(nums)
half_sum = total_sum // 2
current_sum = 0
idx = 0

while current_sum < half_sum:
    current_sum += nums[idx]
    idx += 1

if abs(total_sum - 2*current_sum) < abs(total_sum - 2*current_sum - nums[idx]):
    print(*nums[:idx])
    print(*nums[idx:])
else:
    print(*nums[:idx - 1])
    print(*nums[idx - 1:])