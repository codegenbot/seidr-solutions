n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
left_sum = 0
right_sum = total_sum
min_diff = float("inf")
cut_point = 0

for i in range(n):
    left_sum += nums[i]
    right_sum -= nums[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_point = i

subvector1 = nums[: cut_point + 1]
subvector2 = nums[cut_point + 1 :]

print(*subvector1, sep="\n")
print(*subvector2, sep="\n")