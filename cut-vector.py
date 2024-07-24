n = int(input())
nums = [int(input()) for _ in range(n)]
total_sum = sum(nums)
curr_sum = 0
for i in range(n):
    curr_sum += nums[i]
    if curr_sum * 2 >= total_sum:
        break
print(*nums[: i + 1])
print(*nums[i + 1 :])