n = int(input())
nums = [int(input()) for _ in range(n)]
total_sum = sum(nums)
half_sum = 0
for i, num in enumerate(nums):
    half_sum += num
    if half_sum * 2 >= total_sum:
        break
if abs((total_sum - half_sum) - half_sum) < abs(total_sum - (half_sum - num)):
    print(nums[: i + 1])
    print(nums[i + 1 :])
else:
    print(nums[:i])
    print(nums[i:])