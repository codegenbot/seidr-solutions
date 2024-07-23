n = int(input())
nums = list(map(int, input().split()))

total_sum = sum(nums)
half_sum = total_sum // 2
current_sum = 0
min_diff = abs(total_sum)
idx = 0

for i in range(n-1):
    if abs(total_sum - 2 * current_sum) <= min_diff:
        idx = i
        min_diff = abs(total_sum - 2 * current_sum)
    current_sum += nums[i]

if abs(total_sum - 2 * current_sum) <= min_diff:
    idx = n-1

print(*nums[:idx + 1])
print(*nums[idx + 1:])