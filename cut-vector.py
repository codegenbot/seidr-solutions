n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
running_sum = 0
cut_index = 0

for i, num in enumerate(nums):
    running_sum += num
    if running_sum >= half_sum:
        if running_sum - half_sum <= total_sum - running_sum:
            cut_index = i
            break

print(*nums[: cut_index + 1])
print(*nums[cut_index + 1 :])