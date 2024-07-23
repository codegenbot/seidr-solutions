n = int(input())
nums = list(map(int, input().split()))

total_sum = sum(nums)
half_sum = total_sum // 2
current_sum_left = 0
current_sum_right = 0
idx_left = -1
idx_right = -1
min_diff_left = float('inf')
min_diff_right = float('inf')

for i in range(n):
    if abs(current_sum_left + nums[i] - half_sum) < min_diff_left:
        idx_left = i
        min_diff_left = abs(current_sum_left + nums[i] - half_sum)
    current_sum_left += nums[i]
    
for i in range(n-1, -1, -1):
    if abs(current_sum_right + nums[i] - half_sum) < min_diff_right:
        idx_right = i
        min_diff_right = abs(current_sum_right + nums[i] - half_sum)
    current_sum_right += nums[i]

if min_diff_left <= min_diff_right:
    print(*nums[:idx_left + 1])
    print(*nums[idx_left + 1:])
else:
    print(*nums[:idx_right + 1])
    print(*nums[idx_right + 1:])