n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
curr_sum = 0
index = 0
for i, num in enumerate(nums):
    curr_sum += num
    if curr_sum >= half_sum:
        index = i
        break

if curr_sum - half_sum < half_sum - (curr_sum - num):
    print(nums[: index + 1])
    print(nums[index + 1 :])
else:
    print(nums[:index])
    print(nums[index:])