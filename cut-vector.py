n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = 0
cut_index = -1

for i, num in enumerate(nums):
    half_sum += num
    if half_sum >= total_sum / 2:
        cut_index = i
        break

subvector1 = nums[: cut_index + 1]
subvector2 = nums[cut_index + 1 :]

print(*subvector1)
print(*subvector2)