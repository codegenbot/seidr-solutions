n = int(input())
nums = [int(input()) for _ in range(n)]
total_sum = sum(nums)
half_sum = 0
for i in range(n):
    half_sum += nums[i]
    if half_sum * 2 >= total_sum:
        break
if half_sum * 2 == total_sum:
    print(nums[: i + 1])
    print(nums[i + 1 :])
else:
    if abs(half_sum * 2 - total_sum) < abs((half_sum - nums[i]) * 2 - total_sum):
        print(nums[: i + 1])
        print(nums[i + 1 :])
    else:
        print(nums[:i])
        print(nums[i:])