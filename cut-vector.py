n = int(input())
nums = [int(input()) for _ in range(n)]

nums.sort()
total_sum = sum(nums)
half_sum = total_sum // 2

prefix_sum = 0
for idx, num in enumerate(nums):
    prefix_sum += num
    if prefix_sum >= half_sum:
        if prefix_sum == half_sum or prefix_sum - num == half_sum:
            print(nums[: idx + 1])
            print(nums[idx + 1 :])
            break