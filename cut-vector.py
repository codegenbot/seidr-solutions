n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2

left_sum = 0
for i, num in enumerate(nums):
    left_sum += num
    if left_sum >= half_sum:
        break

if left_sum == half_sum:
    print(nums[: i + 1])
    print(nums[i + 1 :])
else:
    if abs(left_sum - half_sum) < abs(left_sum - num - half_sum):
        print(nums[: i + 1])
        print(nums[i + 1 :])
    else:
        print(nums[:i])
        print(nums[i:])