n = int(input())
nums = list(map(int, input().split()))

total_sum = sum(nums)
half_sum = total_sum // 2
current_sum = nums[0]
idx = -1
min_diff = float('inf')

for i in range(1, n):
    if abs(current_sum + nums[i] - half_sum) <= min_diff:
        idx = i
        min_diff = abs(current_sum + nums[i] - half_sum)
    current_sum += nums[i]

print(*nums[:idx + 1])
print(*nums[idx + 1:])