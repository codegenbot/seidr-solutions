n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
prefix_sum = 0
idx = 0

for i, num in enumerate(nums):
    prefix_sum += num
    if prefix_sum >= half_sum:
        idx = i
        break

if prefix_sum == half_sum:
    print(nums[: idx + 1])
    print(nums[idx + 1 :])
else:
    if abs(prefix_sum - half_sum) < abs(prefix_sum - num - half_sum):
        print(nums[: idx + 1])
        print(nums[idx + 1 :])
    else:
        print(nums[: idx + 1] + [num])
        print(nums[idx + 1 :])