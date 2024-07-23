n = int(input())
nums = list(map(int, input().split()))

total_sum = sum(nums)
half_sum = total_sum // 2
current_sum = 0
idx = 0
min_diff = float('inf')

for i in range(n):
    if abs((total_sum - current_sum) - current_sum) < min_diff:
        idx = i
        min_diff = abs((total_sum - current_sum) - current_sum)
    current_sum += nums[i]

print(*nums[:idx + 1])
print(*nums[idx + 1:])