# Read input
n = int(input())
nums = [int(input()) for _ in range(n)]

# Find cut spot
total_sum = sum(nums)
left_sum = 0
min_diff = total_sum
cut_index = 0

for i in range(n):
    left_sum += nums[i]
    right_sum = total_sum - left_sum
    current_diff = abs(left_sum - right_sum)

    if current_diff < min_diff:
        min_diff = current_diff
        cut_index = i

# Output subvectors
print(*nums[: cut_index + 1])
print(*nums[cut_index + 1 :])