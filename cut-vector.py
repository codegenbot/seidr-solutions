n = int(input())
nums = list(map(int, input().split()))

total_sum = sum(nums)
half_sum = total_sum // 2
current_sum = 0
min_diff = abs(total_sum)
idx = 0

for i in range(n-1): # Update loop range
    if abs(total_sum - 2 * current_sum) < min_diff:
        idx = i
        min_diff = abs(total_sum - 2 * current_sum)
    current_sum += nums[i]

if idx == n-2: # Check if idx points to the second-to-last element
    idx += 1

print(*nums[:idx + 1])
print(*nums[idx + 1:])