n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
left_sum = 0
cut_idx = 0

for i in range(n):
    left_sum += nums[i]
    if left_sum >= half_sum:
        cut_idx = i
        break

if abs(left_sum - (total_sum - left_sum)) < abs(
    left_sum - nums[cut_idx] - (total_sum - left_sum)
):
    cut_idx -= 1

print(*nums[: cut_idx + 1])
print(*nums[cut_idx + 1 :])