n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
left_sum = 0
right_sum = total_sum
min_diff = float("inf")
cut_index = 0

for i in range(n):
    left_sum += nums[i]
    right_sum -= nums[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*nums[: cut_index + 1])
print(*nums[cut_index + 1 :])