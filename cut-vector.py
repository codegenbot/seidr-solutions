n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
current_sum = 0
min_diff = float("inf")
cut_index = -1

for i in range(n):
    current_sum += nums[i]
    diff = abs(total_sum - 2 * current_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = nums[: cut_index + 1]
subvector2 = nums[cut_index + 1 :]

print(*subvector1)
print(*subvector2)