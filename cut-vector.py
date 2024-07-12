n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
closest_sum = 0
idx = 0

for i in range(n):
    if closest_sum <= half_sum:
        closest_sum += nums[i]
        idx = i

subvector1 = nums[: idx + 1]
subvector2 = nums[idx + 1 :]

print(*subvector1)
print(*subvector2)